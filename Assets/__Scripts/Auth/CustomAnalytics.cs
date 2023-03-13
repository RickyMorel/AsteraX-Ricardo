using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public static class CustomAnalytics
{
    public static void SendAchievementUnlocked(Achievement achievement)
    {
        AnalyticsEvent.AchievementUnlocked(achievement.name, new Dictionary<string, object>
        {
            {"time", DateTime.Now }
        });
    }

    public static void SendLevelStart(int level)
    {
        AnalyticsEvent.LevelStart(level, new Dictionary<string, object>
        {
            {"time", DateTime.Now }
        });
    }

    public static void SendGameOver()
    {
        AnalyticsEvent.GameOver(null, new Dictionary<string, object>
        {
            {"time", DateTime.Now },
            {"score", GameManager.Instance.Score },
            {"level", GameManager.Instance.Level },
        });
    }

    public static void SendFinalShipPartChoice()
    {
        Dictionary<string, object> dict = new Dictionary<string, object>();
        dict.Add("time", DateTime.Now);
        int num;

        foreach (ShipPartType partType in Enum.GetValues(typeof(ShipPartType)))
        {
            num = ShipPartsManager.Instance.GetSelectedShipPart(partType);
            dict.Add(partType.ToString(), num);
        }

        AnalyticsEvent.Custom("ShipPartChoice", dict);
    }
}
