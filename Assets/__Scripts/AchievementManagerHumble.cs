using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AchievementManagerHumble
{
    //#region Private Variables

    //private List<Achievement> _achievements = new List<Achievement>();
    //private List<StepTypeData> _achievementData = new List<StepTypeData>();
    //private int _highScore = 5000;

    //#endregion

    //#region Public Properties

    //public bool GotHighScore = false;
    //public int HighScore => _highScore;
    //public List<StepTypeData> AchievementData => _achievementData;

    //#endregion

    //public AchievementManagerHumble()
    //{

    //}

    //private void LoadSave()
    //{
    //    LoadAllAchievements();
    //    AddHighScoreAchievement();

    //    GameData loadedData = SaveManager.Load();

    //    if (loadedData == null) { return; }

    //    _highScore = loadedData.HighScore;

    //    for (int i = 0; i < loadedData.StepTypes.Count; i++)
    //    {
    //        StepTypeData stepTypeData = new StepTypeData((StepType)loadedData.StepTypes[i], loadedData.StepAmounts[i]);
    //        _achievementData.Add(stepTypeData);

    //        UpdateAndCheckAchivements((StepType)loadedData.StepTypes[i], true);
    //    }
    //}

    //private void LoadAllAchievements()
    //{
    //    var achievementsResources = Resources.LoadAll<Achievement>("Achievements");

    //    foreach (var achievement in achievementsResources)
    //    {
    //        Achievement achievementInstance = new Achievement(achievement);
    //        _achievements.Add(achievementInstance);
    //    }
    //}

    //private void AddHighScoreAchievement()
    //{
    //    Achievement achievement = new Achievement();
    //    achievement.Name = "NEW HIGH SCORE";
    //    achievement.Description = "Obtained a new high score!";
    //    achievement.StepType = StepType.ScoreAttained;
    //    achievement.StepCount = _highScore;

    //    _achievements.Add(achievement);
    //}
}
