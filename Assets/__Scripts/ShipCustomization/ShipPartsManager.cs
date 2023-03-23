using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Rendering;

public class ShipPartsManager : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private List<ShipPartSO> _shipParts = new List<ShipPartSO>();
    [SerializeField] private List<ShipPartSO> _ownedBoughtParts = new List<ShipPartSO>();

    #endregion

    #region Public Properties

    public static ShipPartsManager Instance { get; private set; }

    public List<ShipPartSO> ShipParts => _shipParts;
    public List<ShipPartSO> OwnedBoughtParts => _ownedBoughtParts;

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
        SaveManager.OnProductBought += UnlockBoughtSkins;

        UnlockBoughtSkins();
        EquipShipParts();
    }

    private void OnDestroy()
    {
        SaveManager.OnProductBought -= UnlockBoughtSkins;
    }

    public void EquipShipParts()
    {
        //Unlock basic parts
        ShipPartSO basicTurret = ChangePartState(0, ShipPartType.Turret, ShipPartState.Unlocked);
        ShipPartSO basicBody = ChangePartState(0, ShipPartType.Body, ShipPartState.Unlocked);

        GameData loadedData = SaveManager.Load();

        if (loadedData == null)
        {
            //Equip basic parts
            EquipPart(basicTurret);
            EquipPart(basicBody);
            return;
        }

        ShipPartSO turret = ChangePartState(loadedData.SelectedPartsIds[0], ShipPartType.Turret, ShipPartState.Unlocked);
        ShipPartSO body = ChangePartState(loadedData.SelectedPartsIds[1], ShipPartType.Body, ShipPartState.Unlocked);
        EquipPart(turret);
        EquipPart(body);
    }

    private void LoadShipParts()
    {
        ShipPartSO[] shipPartResources = Resources.LoadAll<ShipPartSO>("ShipParts");
        List<ShipPartSO> sortedList = shipPartResources.ToList().OrderBy(x => x.Id).ToList();

        foreach (var shipPart in sortedList)
        {
            ShipPartSO shipPartInstance = Instantiate(shipPart);
            _shipParts.Add(shipPartInstance);
        }
    }

    public ShipPartSO ChangePartState(int partId, ShipPartType partType, ShipPartState wantedState)
    {
        foreach (ShipPartSO partSO in _shipParts)
        {
            if(partSO.Id != partId) { continue; }

            if(partSO.Type != partType) { continue; }

            partSO.State = wantedState;

            return partSO;
        }

        return null;
    }

    public void ClearAllUnlocks()
    {
        foreach (ShipPartSO partSO in _shipParts)
        {
            if (partSO.Id == 0) { continue; }

            partSO.State = ShipPartState.Locked;
        }

        UnlockBoughtSkins();
    }

    public void EquipPart(ShipPartSO shipPartSO)
    {
        DeselectPrevoiusPartsByType(shipPartSO.Type);

        shipPartSO.State = ShipPartState.Selected;

        OnSelectPart?.Invoke();

        SaveManager.Save();
    }

    public void DeselectPrevoiusPartsByType(ShipPartType partType)
    {
        foreach (ShipPartSO partSo in _shipParts)
        {
            if(partSo.Type != partType) { continue; }

            if(partSo.State == ShipPartState.Selected) { partSo.State = ShipPartState.Unlocked; }
        }   
    }

    public int GetSelectedShipPart(ShipPartType shipPartType)
    {
        ShipPartSO wantedPart = _shipParts.Find(part => part.Type == shipPartType && part.State == ShipPartState.Selected);

        return wantedPart.Id;
    }

    public List<int> GetSelectedPartIds()
    {
        List<ShipPartSO> selectedParts = new List<ShipPartSO>();
        List<int> selectedPartIds = new List<int>();

        foreach (ShipPartSO part in _shipParts)
        {
            if(part.State != ShipPartState.Selected) { continue; }

            selectedParts.Add(part);
        }

        var sortedParts = selectedParts.OrderBy(part => part.Type).ToList();

        foreach (ShipPartSO part in sortedParts)
        {
            selectedPartIds.Add(part.Id);
        }

        return selectedPartIds;
    }

    public void UnlockBoughtSkins()
    {
        List<ShipPartSO> boughtParts = SaveManager.LoadPurchases();

        _ownedBoughtParts.Clear();

        foreach (ShipPartSO part in boughtParts)
        {
            ChangePartState(part.Id, part.Type, ShipPartState.Unlocked);

            _ownedBoughtParts.Add(part);
        }
    }
}
