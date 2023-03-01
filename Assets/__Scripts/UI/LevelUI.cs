using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.UI;

public class LevelUI : MonoBehaviour
{
    [SerializeField] private PlayableDirector _timeLine;
    [SerializeField] private Image _panel;
    [SerializeField] private TextMeshProUGUI _levelText;
    [SerializeField] private TextMeshProUGUI _asteroidsText;

    private void OnEnable()
    {
        SetLevelText();
        SetAsteroidsText();

        _timeLine.Play();
    }

    public void SetLevelText()
    {
        int level = GameManager.Instance.Level;
        _levelText.text = $"Level: {level.ToString()}";
    }

    public void SetPanelColor(Color wantedColor)
    {
        _panel.color = wantedColor;
    }

    private void SetAsteroidsText()
    {
        LevelData levelData = GameManager.Instance.GetCurrentLevelData();

        string newText = $"Asteroids: {levelData.Asteroids}       Sub-Asteroids: {levelData.Children}";
        _asteroidsText.text = newText;
    }
}
