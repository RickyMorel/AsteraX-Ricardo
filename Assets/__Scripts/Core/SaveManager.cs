using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Purchasing;

public static class SaveManager
{
    private static GameData _GAME_DATA;
    private static string _FILE_PATH;

    private const string DeadGodsShipId = "com.machomangames.fyouasteroids.deadgodsship";
    private const string DeadGodsShipKey = "DeadGodsShip";

    public static event Action OnProductBought;

    static SaveManager()
    {
        _FILE_PATH = Application.persistentDataPath + "/AsteraX.save";
    }

    public static void Save()
    {
        var highScore = GameManager.Instance.AchievementManager.HighScore;
        var achievementData = GameManager.Instance.AchievementManager.AchievementData;

        _GAME_DATA = new GameData(highScore, achievementData);

        string jsonData = JsonUtility.ToJson(_GAME_DATA, true);

        File.WriteAllText(_FILE_PATH, jsonData);
    }

    public static void SavePurchase(Product product)
    {
        if (product.definition.id == DeadGodsShipId)
        {
            PlayerPrefs.SetInt(DeadGodsShipKey, 1);
        }

        OnProductBought?.Invoke();
    }

    public static List<ShipPartSO> LoadPurchases()
    {
        List<ShipPartSO> unlockedParts = new List<ShipPartSO>();

        if (PlayerPrefs.GetInt(DeadGodsShipKey, 0) == 1)
        {
            ShipPartSO unlockedTurretPart = new ShipPartSO(5, ShipPartType.Turret);
            ShipPartSO unlockedBodyPart = new ShipPartSO(5, ShipPartType.Body);
            unlockedParts.Add(unlockedTurretPart);
            unlockedParts.Add(unlockedBodyPart);
        }

        return unlockedParts;
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

        GameManager.Instance.AchievementManager.ClearStepsAndAchievements();

        ShipPartsManager.Instance.EquipShipParts();
    }
}
