using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/Achievement", order = 2)]
public class Achievement : ScriptableObject
{
    public string Name;
    public string Description;
    public StepType StepType;
    public int StepCount;
    public ShipPartSO UnlockablePart;
    [HideInInspector]
    public bool IsComplete;

    public Achievement()
    {

    }

    public Achievement(Achievement achievement)
    {
        Name = achievement.Name;
        Description =achievement.Description;
        StepType = achievement.StepType;
        StepCount = achievement.StepCount;
        UnlockablePart = achievement.UnlockablePart;
        IsComplete = achievement.IsComplete;
    }
}

public enum StepType
{
    HitAsteroid,
    LuckyShot,
    BulletsFired,
    ScoreAttained,
    LevelUp,
}
