using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipPartsUI : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private Transform _turretsContentTransform;
    [SerializeField] private Transform _bodiesContentTransform;
    [SerializeField] private GameObject _buttonPrefab;

    #endregion

    private void OnEnable()
    {
        LoadButtons();
    }

    private void Start()
    {
        ShipPartsManager.OnSelectPart += LoadButtons;
    }

    private void OnDestroy()
    {
        ShipPartsManager.OnSelectPart -= LoadButtons;
    }

    private void LoadButtons()
    {
        DestroyPrevButtons(_turretsContentTransform);
        DestroyPrevButtons(_bodiesContentTransform);

        foreach (ShipPartSO shipPart in ShipPartsManager.Instance.ShipParts)
        {
            Transform wantedTransform = shipPart.Type == ShipPartType.Turret ? _turretsContentTransform : _bodiesContentTransform;
            GameObject buttonInstance = Instantiate(_buttonPrefab, wantedTransform);
            buttonInstance.GetComponent<ShipPartsButton>().Initialize(shipPart);
        }
    }

    private void DestroyPrevButtons(Transform contentTransform)
    {
        foreach (Transform button in contentTransform)
        {
            if(button == contentTransform) { continue; }

            Destroy(button.gameObject);
        }
    }
}
