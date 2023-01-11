using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipPart : MonoBehaviour
{
    [SerializeField] private ShipPartSO _shipPartSO;

    public ShipPartSO ShipPartSO => _shipPartSO;
}
