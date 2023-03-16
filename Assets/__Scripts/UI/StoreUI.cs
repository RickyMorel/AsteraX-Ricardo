using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StoreUI : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private Image _playerIcon;
    [SerializeField] private TextMeshProUGUI _playerNameText;

    #endregion

    private void OnEnable()
    {
        if(Social.localUser == null) { Debug.Log("Isn't signed in"); return; }
        Texture2D iconTexture = Social.localUser.image;
        Sprite icon = Sprite.Create(iconTexture, new Rect(0f, 0f, iconTexture.width, iconTexture.height), new Vector2(0f, 0f));
        _playerIcon.sprite = icon;

        _playerNameText.text = Social.localUser.userName;
    }

}
