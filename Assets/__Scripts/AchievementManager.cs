using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AchievementManager : MonoBehaviour
{
    [SerializeField] private Achievement[] _achievements;

    private void Start()
    {
        _achievements = Resources.LoadAll<Achievement>("Achievements");
    }
}

public class StepTypeData
{
    public StepType StepType;
    public int CurrentAmount;
}
