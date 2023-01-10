using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Purchasing.MiniJSON;

public static class SaveManager
{
    private static GameData _GAME_DATA;
    private static string _FILE_PATH;

    static SaveManager()
    {
        _FILE_PATH = Application.persistentDataPath + "/AsteraX.save";

        Debug.Log(_FILE_PATH);
    }

    public static void Save(int highScore, List<StepTypeData> achievementData)
    {
        _GAME_DATA = new GameData(highScore, achievementData);

        string jsonData = JsonUtility.ToJson(_GAME_DATA, true);

        File.WriteAllText(_FILE_PATH, jsonData);
    }

    public static GameData Load()
    {
        if (!File.Exists(_FILE_PATH)) { return null; }

        string dataAsJson = File.ReadAllText(_FILE_PATH);

        try { _GAME_DATA = JsonUtility.FromJson<GameData>(dataAsJson); }
        catch { Debug.Log("Corrupted Save!"); return null; }

        return _GAME_DATA;
    }

    public static void DeleteSave()
    {
        if (!File.Exists(_FILE_PATH)) { return; }

        File.Delete(_FILE_PATH);

        AchievementManager.Instance.ClearStepsAndAchievements();
    }
}
