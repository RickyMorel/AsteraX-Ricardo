using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StoreUI : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private Image _playerIcon;
    [SerializeField] private TextMeshProUGUI _playerNameText;

    #endregion

    private void Start()
    {
        GPGSAuthentication.Instance.OnSignedIn += FillUserData;
    }

    private void OnDestroy()
    {
        GPGSAuthentication.Instance.OnSignedIn -= FillUserData;
    }

    public void FillUserData()
    {
        _playerNameText.text = Social.localUser.userName;

        StartCoroutine(GetImage());
    }

    private IEnumerator GetImage()
    {
        Texture2D iconTexture;

        while(Social.localUser.image == null)
        {
            yield return null;
        }
        
        iconTexture = Social.localUser.image;
        Sprite icon = Sprite.Create(iconTexture, new Rect(0f, 0f, iconTexture.width, iconTexture.height), new Vector2(0f, 0f));
        _playerIcon.sprite = icon;
    }

}
