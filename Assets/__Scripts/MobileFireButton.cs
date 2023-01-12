using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MobileFireButton : MonoBehaviour
{
    private bool _registeredWithPauseChanged = false;

    private Image _image;

    private void Start()
    {
        _image = GetComponent<Image>();

        _image.raycastTarget = false;

        if (Application.isMobilePlatform)
        {
            RegisteredWithPauseChanged();
            PauseChangedCallback();
        }
        else
        {
#if UNITY_EDITOR
            StartCoroutine(CheckForUnityRemote(1));
#else
            gameObject.SetActive(false);
#endif
        }
    }

    private IEnumerator CheckForUnityRemote(float delay)
    {
        while (!_registeredWithPauseChanged)
        {
            if (UnityEditor.EditorApplication.isRemoteConnected)
            {
                Debug.Log("MobileFireButton: CheckForUnityRemote() - Connected to Unity Remote!");
                RegisteredWithPauseChanged();
                PauseChangedCallback();
            }
            else
            {
                yield return new WaitForSeconds(delay);
            }
        }
    }

    private void RegisteredWithPauseChanged()
    {
        if (_registeredWithPauseChanged) { return; }

        _registeredWithPauseChanged=true;
    }

    private void PauseChangedCallback()
    {
        _image.raycastTarget = !GameManager.Instance.IsPaused;
    }
}
