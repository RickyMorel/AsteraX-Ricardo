using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PlayerStatsUI : MonoBehaviour
{
    #region Editor Fields

    [Header("UI Elements")]
    [SerializeField] private TextMeshProUGUI _jumpsText;
    [SerializeField] private TextMeshProUGUI _scoreText;
    [SerializeField] private Image _pauseButton;

    [Header("Sprites")]
    [SerializeField] private Sprite _resumeSprite;
    [SerializeField] private Sprite _pausedSprite;

    #endregion

    #region Private Variables

    private bool _isPaused = false;

    #endregion

    private void Start()
    {
        GameManager.OnJumpsUpdated += SetJumpsText;
        GameManager.OnScoreUpdated += SetScoreText;
    }

    private void OnDestroy()
    {
        GameManager.OnJumpsUpdated -= SetJumpsText;
        GameManager.OnScoreUpdated -= SetScoreText;
    }

    public void SetJumpsText(int jumps)
    {
        _jumpsText.text = $"Jumps: {jumps}";
    }

    public void SetScoreText(int score)
    {
        _scoreText.text = $"Score: {score.ToString("N0")}";
    }

    public void PauseGame()
    {
        _isPaused = !_isPaused;

        GameManager.Instance.PauseGame(_isPaused);

        Sprite wantedSprite = _isPaused ? _pausedSprite : _resumeSprite;
        Color wantedColor = _isPaused ? Color.red : Color.white;

        _pauseButton.sprite = wantedSprite;
        _pauseButton.color = wantedColor;  
    }
}
