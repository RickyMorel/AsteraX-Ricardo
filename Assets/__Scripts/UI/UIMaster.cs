using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIMaster : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private GameObject _startGamePanel;
    [SerializeField] private Canvas _playerStatsCanvas;
    [SerializeField] private GameObject _gameOverPanel;
    [SerializeField] private GameObject[] _levelPanels;
    [SerializeField] private GameObject _pausePanel;
    [SerializeField] private GameObject _storePanel;

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
        _gameOverPanel.SetActive(false);
        _storePanel.SetActive(false);
        EnablePanels(_levelPanels, false);
        _pausePanel.SetActive(false);
        _playerStatsCanvas.enabled = false;

        switch (state)
        {
            case GameState.Starting:
                _playerStatsCanvas.enabled = false;
                _startGamePanel.SetActive(true);
                break;
            case GameState.Playing:
                _playerStatsCanvas.enabled = true;
                break;
            case GameState.Respawning:
                _playerStatsCanvas.enabled = true;
                break;
            case GameState.LevelChange:
                EnablePanels(_levelPanels, true);
                break;
            case GameState.Paused:
                _pausePanel.SetActive(true);
                break;
            case GameState.Over:
                _playerStatsCanvas.enabled = false;
                _gameOverPanel.SetActive(true);
                break;
            case GameState.ViewingStore:
                _storePanel.SetActive(true);
                break;
        }
    }

    private void EnablePanels(GameObject[] panels, bool isEnabled)
    {
        foreach (GameObject panel in panels)
        {
            panel.SetActive(isEnabled);
        }
    }
}
