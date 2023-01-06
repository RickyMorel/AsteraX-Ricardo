using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Playables;

public class LevelUI : MonoBehaviour
{
    [SerializeField] private PlayableDirector _timeLine;
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

    private void SetAsteroidsText()
    {
        LevelData levelData = GameManager.Instance.GetCurrentLevelData();

        string newText = $"Asteroids: {levelData.Asteroids}   Children: {levelData.Children}";
        _asteroidsText.text = newText;
    }
}
