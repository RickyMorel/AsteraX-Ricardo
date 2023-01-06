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

    private void Start()
    {
        var achievementsResources = Resources.LoadAll<Achievement>("Achievements");

        foreach (var achievement in achievementsResources)
        {
            Achievement achievementInstance = Instantiate(achievement);
            _achievements.Add(achievementInstance);
        }

        Projectile.OnHit += HandleBulletHit;
        Projectile.OnLuckyShot += HandleLuckyShot;
    }

    private void OnDestroy()
    {
        Projectile.OnHit -= HandleBulletHit;
        Projectile.OnLuckyShot -= HandleLuckyShot;
    }

    private StepTypeData CheckIfHasStepType(StepType newStepType)
    {
        StepTypeData wantedData = _achievementData.Find(stepData => stepData.StepType == newStepType);

        if(wantedData != null) { return wantedData; }

        StepTypeData newDataType = new StepTypeData(newStepType);

        _achievementData.Add(newDataType);

        return newDataType;
    }

    private void HandleBulletHit()
    {
        UpdateAndCheckAchivements(StepType.HitAsteroid);
    }

    private void HandleLuckyShot()
    {
        UpdateAndCheckAchivements(StepType.LuckyShot);
    }

    private void UpdateAndCheckAchivements(StepType stepType)
    {
        StepTypeData wantedData = CheckIfHasStepType(stepType);

        wantedData.CurrentAmount++;

        foreach (Achievement achievement in _achievements)
        {
            if(achievement.StepType != wantedData.StepType) { continue; }

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
