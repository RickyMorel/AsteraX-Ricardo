using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;


public class GameOverUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _gameOverText;
    [SerializeField] private TextMeshProUGUI _scoreText;

    private void OnEnable()
    {
        SetTitleText();
        SetScoreText();
    }

    private void SetTitleText()
    {
        string wantedText = AchievementManager.Instance.GotHighScore ? "High Score!" : "Game Over";
        _gameOverText.text = wantedText;
    }

    public void SetScoreText()
    {
        int level = GameManager.Instance.Level;
        int score = GameManager.Instance.Score;
        string newText = $"Final Level: {level}\r\nFinal Score: {score.ToString("N0")}";
        _scoreText.text = newText;
    }

    public void Retry()
    {
        GameManager.Instance.ReloadScene();
    }

    public void Continue()
    {
        GameManager.Instance.ReloadScene();
    }
}
