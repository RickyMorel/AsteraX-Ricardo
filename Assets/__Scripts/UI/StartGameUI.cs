using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class StartGameUI : MonoBehaviour
{
    public void PressStart()
    {
        GameManager.Instance.RaiseLevel();
    }

    public void ViewLeaderboards()
    {
        GPGSAuthentication.Instance.ShowLeaderboard();
    }

    public void ViewStore(bool isViewingStore)
    {
        bool isSignedIn = GPGSAuthentication.Instance.ShowStore();

#if UNITY_EDITOR
        isSignedIn = true;
#endif

        GameState state = isViewingStore && isSignedIn ? GameState.ViewingStore : GameState.Starting;

        GameManager.Instance.SetGameState(state);
    }

    public void DeleteSave()
    {
        SaveManager.DeleteSave();
    }

}
