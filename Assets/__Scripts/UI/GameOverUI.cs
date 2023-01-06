using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameOverUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _scoreText;

    private void OnEnable()
    {
        SetScoreText();
    }

    public void SetScoreText()
    {
        int level = GameManager.Instance.Level;
        int score = GameManager.Instance.Score;
        string newText = $"Final Level: {level}\r\nFinal Score: {score.ToString("N0")}";
        _scoreText.text = newText;
    }
}
