using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(AchievementManager))]
public class GameManager : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private PlayerStatsSO _playerStatsSo;

    #endregion

    #region Private Variables

    private GameState _gameState = GameState.Starting;
    private GameState _prevGameState;
    private int _score = 0;
    private int _jumps = 3;
    private int _level = 0;
    private List<LevelData> _levelDataList = new List<LevelData>();

    private AchievementManager _achievementManager;

    #endregion

    #region Public Properties

    public string LevelProgression = "1:3/2,2:4/2,3:3/3,4:4/3,5:5/3,6:3/4,7:4/4,8:5/4,9:6/4,10:3/5,";

    public static GameManager Instance { get; private set; }

    public int Score => _score;
    public int Level => _level;
    public List<LevelData> LevelDataList => _levelDataList;

    public static event Action<int> OnJumpsUpdated;
    public static event Action<int> OnScoreUpdated;
    public static event Action<int> OnLevelUpdated;

    #endregion

    #region Unity Loops

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

        ReadLevelsData();
    }

    private void Start()
    {
        _achievementManager = GetComponent<AchievementManager>();

        _jumps = _playerStatsSo.Jumps;

        OnJumpsUpdated?.Invoke(_jumps);
        OnScoreUpdated?.Invoke(_score);

        SetGameState(GameState.Starting);
    }

    #endregion

    private void ReadLevelsData()
    {
        string[] levelDataArray = LevelProgression.Split(",");
        
        //format for each entry is x:y/z
        foreach (string entry in levelDataArray)
        {
            string[] levelAndDataSplit = entry.Split(":");
            string[] asteroidsAndChildrenSplit = levelAndDataSplit[1].Split("/");

            int level = int.Parse(levelAndDataSplit[0].ToString());
            int asteroids = int.Parse(asteroidsAndChildrenSplit[0].ToString());
            int children = int.Parse(asteroidsAndChildrenSplit[1].ToString());

            LevelData levelData = new LevelData();
            levelData.Level = level;
            levelData.Asteroids = asteroids;
            levelData.Children = children;

            _levelDataList.Add(levelData);
        }

        //Organize data by levels
        _levelDataList.OrderBy(levelData => levelData.Level);
    }

    public LevelData GetCurrentLevelData()
    {
        return _levelDataList[Level - 1];
    }

    public void ReduceJumps()
    {
        if (_gameState != GameState.Playing) { return; }

        if (_jumps <= 0) { GameOver(); return; }

        _jumps--;

        OnJumpsUpdated?.Invoke(_jumps);

        Player.Instance.Respawn(_playerStatsSo.RespawnTime);
    }

    public void AddScore(int amountAdded)
    {
        if(_gameState != GameState.Playing) { return; }

        _score += amountAdded;

        OnScoreUpdated?.Invoke(_score);
    }

    public void GameOver()
    {
        _achievementManager.CheckUpdateHighScore(_score);

        SetGameState(GameState.Over);

        _achievementManager.SaveAchievements();

        Invoke(nameof(ReloadScene), 4f);
    }

    private void ReloadScene()
    {
        SceneManager.LoadScene(0);
    }

    public void PauseGame(bool isPaused)
    {
        float wantedTimeScale = isPaused ? 0f : 1f;

        if (isPaused) SetGameState(GameState.Paused); else SetGameState(_prevGameState);

        Time.timeScale = wantedTimeScale;
    }

    public void RaiseLevel()
    {
        _level++;

        OnLevelUpdated?.Invoke(_level);

        StartCoroutine(ChangeLevelCoroutine());
    }

    private IEnumerator ChangeLevelCoroutine()
    {
        SetGameState(GameState.LevelChange);

        yield return new WaitForSeconds(2f);

        SetGameState(GameState.Playing);

        AsteroidSpawner.Instance.SpawnAsteroids();
    }

    public void SetGameState(GameState newState)
    {
        _prevGameState = _gameState;

        _gameState = newState;

        UIMaster.Instance.EnablePanelByState(newState);
    }
}

[System.Serializable]
public class LevelData
{
    public int Level;
    public int Asteroids;
    public int Children;
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
