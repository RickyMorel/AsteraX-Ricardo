using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/LevelAmbience", order = 1)]
public class LevelAmbienceSO : ScriptableObject
{
    public List<LevelAmbienceData> LevelAmbienceDatas = new List<LevelAmbienceData>();

    public LevelAmbienceData GetLevelAmbience(int level)
    {
        int tensAmount = Mathf.FloorToInt((level) / 10) - 1;

        if(tensAmount < 0) { return null; }

        return LevelAmbienceDatas[tensAmount];
    }
}

[System.Serializable]
public class LevelAmbienceData
{
    public Color AsteroidColor;
    public Color BackgroundColor;
    public GameObject StarObj;
}
