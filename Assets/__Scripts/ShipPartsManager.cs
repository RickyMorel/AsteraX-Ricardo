using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Rendering;

public class ShipPartsManager : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private List<ShipPartSO> _shipParts = new List<ShipPartSO>();

    #endregion

    #region Public Properties

    public static ShipPartsManager Instance { get; private set; }

    public List<ShipPartSO> ShipParts => _shipParts;

    public static event Action OnSelectPart;

    #endregion

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }

        LoadShipParts();
    }

    private void Start()
    {
        //Unlock basic parts
        ChangePartState(0, ShipPartType.Turret, ShipPartState.Unlocked);
        ChangePartState(0, ShipPartType.Body, ShipPartState.Unlocked);
    }

    private void LoadShipParts()
    {
        var shipPartResources = Resources.LoadAll<ShipPartSO>("ShipParts");

        foreach (var shipPart in shipPartResources)
        {
            ShipPartSO shipPartInstance = Instantiate(shipPart);
            _shipParts.Add(shipPartInstance);
        }
    }

    public void ChangePartState(int partId, ShipPartType partType, ShipPartState wantedState)
    {
        foreach (ShipPartSO partSO in _shipParts)
        {
            if(partSO.Id != partId) { continue; }

            if(partSO.Type != partType) { continue; }

            partSO.State = wantedState;
        }
    }

    public void ClearAllUnlocks()
    {
        foreach (ShipPartSO partSO in _shipParts)
        {
            if (partSO.Id == 0) { continue; }

            partSO.State = ShipPartState.Locked;
        }
    }

    public void EquipPart(ShipPartSO shipPartSO)
    {
        shipPartSO.State = ShipPartState.Selected;

        OnSelectPart?.Invoke();
    }
}
