using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/ShipPart", order = 2)]
public class ShipPartSO : ScriptableObject
{
    public string PartName;
    public ShipPartType Type;
    public int Id;

    [HideInInspector]
    public ShipPartState State = ShipPartState.Locked;
}

public enum ShipPartType
{
    Turret,
    Body,
}

public enum ShipPartState
{
    Unlocked,
    Selected,
    Locked
}