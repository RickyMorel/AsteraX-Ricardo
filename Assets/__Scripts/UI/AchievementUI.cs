using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Playables;

public class AchievementUI : MonoBehaviour
{
    [SerializeField] private PlayableDirector _timeLine;
    [SerializeField] private TextMeshProUGUI _nameText;
    [SerializeField] private TextMeshProUGUI _descriptionText;

    public void ShowNewAchievement(string name, string description)
    {
        _nameText.text = name;
        _descriptionText.text = description;

        _timeLine.Play();
    }
}
