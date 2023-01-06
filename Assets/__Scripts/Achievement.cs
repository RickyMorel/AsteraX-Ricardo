using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/Achievement", order = 2)]
public class Achievement : ScriptableObject
{
    public string Name;
    public string Description;
    public StepType StepType;
    public int StepCount;
    //public Image UnlockablePart;
    public bool IsComplete;
}

public enum StepType
{
    HitAsteroid,
    LuckyShot,
    BulletsFired,
    ScoreAttained,
    LevelUp,
}
