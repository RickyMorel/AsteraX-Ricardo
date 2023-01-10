using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class AchievementManager : MonoBehaviour
{
    [SerializeField] private List<Achievement> _achievements = new List<Achievement>();
    [SerializeField] private List<StepTypeData> _achievementData = new List<StepTypeData>();
    [SerializeField] private int _highScore = 5000;

    public static AchievementManager Instance { get; private set; }
    public bool GotHighScore = false;

    private void Awake()
    {
        GetSingleton();
        LoadSave();
    }
    private void GetSingleton()
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

    private void LoadSave()
    {
        LoadAllAchievements();
        AddHighScoreAchievement();

        GameData loadedData = SaveManager.Load();

        if (loadedData == null) { return; }

        _highScore = loadedData.HighScore;

        for (int i = 0; i < loadedData.StepTypes.Count; i++)
        {
            StepTypeData stepTypeData = new StepTypeData((StepType)loadedData.StepTypes[i], loadedData.StepAmounts[i]);
            _achievementData.Add(stepTypeData);

            UpdateAndCheckAchivements((StepType)loadedData.StepTypes[i], true);
        }
    }

    private void LoadAllAchievements()
    {
        var achievementsResources = Resources.LoadAll<Achievement>("Achievements");

        foreach (var achievement in achievementsResources)
        {
            Achievement achievementInstance = Instantiate(achievement);
            _achievements.Add(achievementInstance);
        }
    }

    public void ClearStepsAndAchievements()
    {
        _achievementData.Clear();
        _highScore = 0;

        foreach (Achievement achievement in _achievements)
        {
            achievement.IsComplete = false;
        }
    }

    private void Start()
    {
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

    public void CheckUpdateHighScore(int currentScore)
    {
        if(_highScore > currentScore) { return; }

        _highScore = currentScore;

        GotHighScore = true;
    }

    public void SaveAchievements()
    {
        SaveManager.Save(_highScore, _achievementData);
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
        UpdateAndCheckAchivements(StepType.LevelUp, false,level);
    }

    private void OnScoreAttained(int score)
    {
        UpdateAndCheckAchivements(StepType.ScoreAttained, false, score);
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

    private void UpdateAndCheckAchivements(StepType stepType, bool isLoad = false, int setValue = -1)
    {
        StepTypeData wantedData = CheckIfHasStepType(stepType);

        //if is not loading, update new value
        if (!isLoad) { if (setValue == -1) wantedData.CurrentAmount++; else wantedData.CurrentAmount = setValue; }

        foreach (Achievement achievement in _achievements)
        {
            if(achievement.StepType != wantedData.StepType) { continue; }

            if(achievement.StepCount > wantedData.CurrentAmount) { continue; }

            if (achievement.IsComplete) { continue; }

            UnlockAchievement(achievement, isLoad);
        }
    }

    private void UnlockAchievement(Achievement achievement, bool isLoad)
    {
        Debug.Log("UnlockAchievement: " + isLoad);
        achievement.IsComplete = true;

        if(isLoad) { return; }

        AchievementUI.Instance.AddAchievementToQueue(achievement);

        SaveManager.Save(_highScore, _achievementData);
    }
}

[System.Serializable]
public class StepTypeData
{
    public StepType StepType;
    public int CurrentAmount;

    public StepTypeData(StepType newStepType, int newAmount = 0)
    {
        StepType = newStepType;
        CurrentAmount = newAmount;
    }
}
