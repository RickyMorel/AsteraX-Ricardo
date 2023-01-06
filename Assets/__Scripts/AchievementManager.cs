using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class AchievementManager : MonoBehaviour
{
    [SerializeField] private List<Achievement> _achievements = new List<Achievement>();
    [SerializeField] private List<StepTypeData> _achievementData = new List<StepTypeData>();
    [SerializeField] private int _highScore = 5000;

    private void Start()
    {
        var achievementsResources = Resources.LoadAll<Achievement>("Achievements");

        foreach (var achievement in achievementsResources)
        {
            Achievement achievementInstance = Instantiate(achievement);
            _achievements.Add(achievementInstance);
        }

        AddHighScoreAchievement();

        Projectile.OnHit += HandleBulletHit;
        Projectile.OnLuckyShot += HandleLuckyShot;
        Projectile.OnBulletFired += HandleBulletFired;
        GameManager.OnScoreUpdated += OnScoreAttained;
        GameManager.OnLevelUpdated += OnUpdatedLevel;
    }

    private void OnDestroy()
    {
        Projectile.OnHit -= HandleBulletHit;
        Projectile.OnLuckyShot -= HandleLuckyShot;
        Projectile.OnBulletFired -= HandleBulletFired;
        GameManager.OnScoreUpdated -= OnScoreAttained;
        GameManager.OnLevelUpdated -= OnUpdatedLevel;
    }

    private void AddHighScoreAchievement()
    {
        Achievement achievement = new Achievement();
        achievement.Name = "NEW HIGH SCORE";
        achievement.Description = "Obtained a new high score!";
        achievement.StepType = StepType.ScoreAttained;
        achievement.StepCount = _highScore;

        _achievements.Add(achievement);
    }

    private StepTypeData CheckIfHasStepType(StepType newStepType)
    {
        StepTypeData wantedData = _achievementData.Find(stepData => stepData.StepType == newStepType);

        if(wantedData != null) { return wantedData; }

        StepTypeData newDataType = new StepTypeData(newStepType);

        _achievementData.Add(newDataType);

        return newDataType;
    }

    private void OnUpdatedLevel(int level)
    {
        UpdateAndCheckAchivements(StepType.LevelUp, level);
    }

    private void OnScoreAttained(int score)
    {
        UpdateAndCheckAchivements(StepType.ScoreAttained, score);
    }

    private void HandleBulletFired()
    {
        UpdateAndCheckAchivements(StepType.BulletsFired);
    }

    private void HandleBulletHit()
    {
        UpdateAndCheckAchivements(StepType.HitAsteroid);
    }

    private void HandleLuckyShot()
    {
        UpdateAndCheckAchivements(StepType.LuckyShot);
    }

    private void UpdateAndCheckAchivements(StepType stepType, int setValue = -1)
    {
        StepTypeData wantedData = CheckIfHasStepType(stepType);

        if(setValue == -1) wantedData.CurrentAmount++; else wantedData.CurrentAmount = setValue;

        foreach (Achievement achievement in _achievements)
        {
            if(achievement.StepType != wantedData.StepType) { continue; }

            if(achievement.StepCount > wantedData.CurrentAmount) { continue; }

            if (achievement.IsComplete) { continue; }

            UnlockAchievement(achievement);
        }
    }

    private void UnlockAchievement(Achievement achievement)
    {
        achievement.IsComplete = true;

        AchievementUI.Instance.AddAchievementToQueue(achievement);
    }
}

[System.Serializable]
public class StepTypeData
{
    public StepType StepType;
    public int CurrentAmount;

    public StepTypeData(StepType newStepType)
    {
        StepType = newStepType;
        CurrentAmount = 0;
    }
}
