using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIMaster : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private GameObject _startGamePanel;
    [SerializeField] private GameObject _playerStatsPanel;
    [SerializeField] private GameObject _gameOverPanel;
    [SerializeField] private GameObject _levelPanel;

    #endregion

    #region Public Properties

    public static UIMaster Instance { get; private set; }

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
    }

    #endregion

    public void EnablePanelByState(GameState state)
    {
        _startGamePanel.SetActive(false);
        _playerStatsPanel.SetActive(false);
        _gameOverPanel.SetActive(false);
        _levelPanel.SetActive(false);

        switch (state)
        {
            case GameState.Starting:
                _startGamePanel.SetActive(true);
                break;
            case GameState.Playing:
                _playerStatsPanel.SetActive(true);
                break;
            case GameState.Respawning:
                _playerStatsPanel.SetActive(true);
                break;
            case GameState.LevelChange:
                _levelPanel.SetActive(true);
                break;
            case GameState.Over:
                _gameOverPanel.SetActive(true);
                break;
        }
    }
}