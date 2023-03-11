using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipPartSelector : MonoBehaviour
{
    [SerializeField] private ShipPart[] _allShipParts;

    private void Awake()
    {
        _allShipParts = GetComponentsInChildren<ShipPart>(true);

        DeactivateAllParts();
    }

    private void Start()
    {
        ShipPartsManager.OnSelectPart += HandlePartSelected;
    }

    private void OnDestroy()
    {
        ShipPartsManager.OnSelectPart -= HandlePartSelected;
    }

    private void HandlePartSelected()
    {
        //Find Selected Parts
        List<ShipPartSO> selectedParts = new List<ShipPartSO>();

        foreach (ShipPartSO part in ShipPartsManager.Instance.ShipParts)
        {
            if(part.State != ShipPartState.Selected) { continue; }

            selectedParts.Add(part);
        }

        DeactivateAllParts();

        //activate selected parts
        foreach (ShipPartSO wantedPart in selectedParts)
        {
            foreach (ShipPart shipPart in _allShipParts)
            {
                if (shipPart.ShipPartSO.Id != wantedPart.Id) { continue; }
                if (shipPart.ShipPartSO.Type != wantedPart.Type) { continue; }

                shipPart.gameObject.SetActive(true);
            }
        }
    }

    private void DeactivateAllParts()
    {
        foreach (ShipPart shipPart in _allShipParts)
        {

            shipPart.gameObject.SetActive(false);
        }
    }
}
