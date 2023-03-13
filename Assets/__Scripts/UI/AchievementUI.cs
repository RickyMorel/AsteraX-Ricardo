using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SocialPlatforms.Impl;

public class AchievementUI : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private PlayableDirector _timeLine;
    [SerializeField] private TextMeshProUGUI _nameText;
    [SerializeField] private TextMeshProUGUI _descriptionText;

    #endregion

    #region Private Variables

    private Queue<Achievement> _achievementCoroutines = new Queue<Achievement>();
    private float _timeSinceLastPlayedTimeline = 10f;

    #endregion

    #region Public Properties

    public static AchievementUI Instance { get; private set; }

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

    private void Update()
    {
        _timeSinceLastPlayedTimeline += Time.deltaTime;
    }

    private void LateUpdate()
    {
        if(_achievementCoroutines.Count < 1) { return; }

        if(_timeSinceLastPlayedTimeline < _timeLine.duration + 1f) { return; }

        if(_timeLine.state == PlayState.Playing) { return; }

        ShowNewAchievement(_achievementCoroutines.Dequeue());
    }

    #endregion

    private void ShowNewAchievement(Achievement achievement)
    {
        _timeSinceLastPlayedTimeline = 0;

        string descriptionText = achievement.Description;

        Debug.Log("achievement.StepCount: " + achievement.StepCount);
        Debug.Log("descriptionText: " + descriptionText);

        if (descriptionText.Contains("#")) { descriptionText = descriptionText.Replace("#", achievement.StepCount.ToString()); }

        _nameText.text = achievement.Name;
        _descriptionText.text = descriptionText;

        _timeLine.Play();
    }

    public void AddAchievementToQueue(Achievement achievement)
    {
        _achievementCoroutines.Enqueue(achievement);
    }
}
