using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    #region Editor Fields

    [Header("SO's")]
    [SerializeField] private PlayerStatsSO _playerStatsSo;
    [SerializeField] private AudioSO _audioSo;

    [Header("Screen Bounds")]
    [SerializeField] private Vector2 _bounds = new Vector2(16, 9);
    [SerializeField] private float _minSpawnDistanceFromPlayer = 5f;

    #endregion

    #region Private Variables

    private int _score = 0;
    private int _jumps = 3;
    private int _level = 0;
    private List<LevelData> _levelDataList = new List<LevelData>();
    private GameManagerHumble _gameManagerHumble;
    private AchievementManager _achievementManager;
    private AsteroidSpawner _asteroidSpawner;
    private ScreenBounds _screenBounds;

    #endregion

    #region Public Properties

    public static GameManager Instance { get; private set; }

    public static event Action<int> OnJumpsUpdated;
    public static event Action<int> OnScoreUpdated;
    public static event Action<int> OnLevelUpdated;

    public int Score => _gameManagerHumble.Score;
    public int Level => _gameManagerHumble.Level;
    public bool IsPaused => _gameManagerHumble.GameState != GameState.Playing;
    public GameState GameState => _gameManagerHumble.GameState;
    public GameManagerHumble GameManagerHumble => _gameManagerHumble;
    public AsteroidSpawner AsteroidSpawner => _asteroidSpawner;
    public ScreenBounds ScreenBounds => _screenBounds;
    public AchievementManager AchievementManager => _achievementManager;
    public AudioSO AudioSo => _audioSo;
    public List<LevelData> LevelDataList => _levelDataList;

    #endregion

    #region Unity Loops

    public GameManager()
    {
        _screenBounds = new ScreenBounds(_bounds, _minSpawnDistanceFromPlayer);
    }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }
    }

    private void Start()
    {
        _jumps = _playerStatsSo.Jumps;

        _achievementManager = new AchievementManager();
        _gameManagerHumble = new GameManagerHumble(_score, _jumps, _level, GameState.Playing, false);
        _asteroidSpawner = new AsteroidSpawner(this, Player.Instance.gameObject);

        OnJumpsUpdated?.Invoke(_gameManagerHumble.Jumps);
        OnScoreUpdated?.Invoke(_gameManagerHumble.Score);

        SetGameState(GameState.Starting);
    }

    #endregion

    public void ReduceJumps()
    {
        if (_gameManagerHumble.IsInvunerable) { return; }

        if (_gameManagerHumble.GameState != GameState.Playing) { return; }

        if (_gameManagerHumble.Jumps <= 0) { GameOver(); return; }

        _gameManagerHumble.ReduceJumps();

        OnJumpsUpdated?.Invoke(_gameManagerHumble.Jumps);

        Player.Instance.Respawn(_playerStatsSo.RespawnTime);
    }

    public void AddScore(int amountAdded)
    {
        _gameManagerHumble.AddScore(amountAdded);

        OnScoreUpdated?.Invoke(_gameManagerHumble.Score);
    }

    public void GameOver()
    {
        DestroyAllRemainingBullets();

        _achievementManager.CheckUpdateHighScore(_score);

        SetGameState(GameState.Over);

        _achievementManager.SaveAchievements();

        GPGSAuthentication.Instance.TrySendScoreToLeaderBoard();
    }

    private void DestroyAllRemainingBullets()
    {
        Projectile[] bullets = FindObjectsOfType<Projectile>();

        foreach (Projectile bullet in bullets)
        {
            Destroy(bullet);
        }
    }

    public void Revive()
    {
        SetGameState(GameState.Playing);

        _gameManagerHumble.Revive();
    }

    public void ReloadScene()
    {
        SceneManager.LoadScene(0);
    }

    public void PauseGame(bool isPaused)
    {
        float wantedTimeScale = isPaused ? 0f : 1f;

        if (isPaused) SetGameState(GameState.Paused); else SetGameState(_gameManagerHumble.PrevGameState );

        Time.timeScale = wantedTimeScale;
    }

    public void RaiseLevel()
    {
        _gameManagerHumble.RaiseLevel();

        OnLevelUpdated?.Invoke(_gameManagerHumble.Level);

        StartCoroutine(ChangeLevelCoroutine());
    }

    private IEnumerator ChangeLevelCoroutine()
    {
        SetGameState(GameState.LevelChange);

        yield return new WaitForSeconds(2f);

        SetGameState(GameState.Playing);

        LevelData levelData = GameManagerHumble.GetCurrentLevelData();

        _asteroidSpawner.SpawnAsteroids(levelData.Asteroids);
    }

    public void SetGameState(GameState newState)
    {
        _gameManagerHumble.SetGameState(newState);

        UIMaster.Instance.EnablePanelByState(newState);
    }
}

[System.Serializable]
public class LevelData
{
    public int Level;
    public int Asteroids;
    public int Children;

    public LevelData(LevelData levelData)
    {
        Level = levelData.Level;
        Asteroids = levelData.Asteroids;
        Children = levelData.Children;
    }

    public LevelData()
    {

    }
}

public enum GameState
{
    Starting = 1,
    Playing = 2,
    Over = 3,
    Respawning = 4,
    LevelChange = 5,
    Paused = 6,
}
