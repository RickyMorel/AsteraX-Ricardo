using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShipPartsButton : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _partNameText;
    [SerializeField] private Image _backgroundImage;
    [SerializeField] private Image _checkmark;

    private ShipPartSO _currentPart;
    private ButtonAudio _buttonAudio;

    private void Start()
    {
        _buttonAudio = GetComponent<ButtonAudio>();
    }

    public void Initialize(ShipPartSO shipPartSO)
    {
        _currentPart = shipPartSO;

        _partNameText.text = shipPartSO.PartName;
        _checkmark.enabled = false;
        _backgroundImage.color = Color.white;

        switch (shipPartSO.State)
        {
            case ShipPartState.Unlocked:
                //do nothing
                break;
            case ShipPartState.Locked:
                _backgroundImage.color = Color.red;
                break;
            case ShipPartState.Selected:
                _checkmark.enabled = true;
                break;
        }
    }

    public void OnClick()
    {
        if(_currentPart.State == ShipPartState.Locked) { return; }

        ShipPartsManager.Instance.EquipPart(_currentPart);
    }
}
