using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameData
{
    public List<int> StepTypes = new List<int>();
    public List<int> StepAmounts = new List<int>();
    public int HighScore;
    public List<int> SelectedPartsIds = new List<int>();

    public GameData(int highScore, List<StepTypeData> achievementData)
    {
        foreach (StepTypeData data in achievementData)
        { 
            StepTypes.Add((int)data.StepType);
            StepAmounts.Add(data.CurrentAmount);
        }

        HighScore = highScore;
        SelectedPartsIds = ShipPartsManager.Instance.GetSelectedPartIds();
    }
}
