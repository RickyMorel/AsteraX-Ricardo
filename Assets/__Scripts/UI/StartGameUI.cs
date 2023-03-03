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
        Debug.Log("Pressed view leaderboards");
        GPGSAuthentication.Instance.ShowLeaderboard();
    }

    public void DeleteSave()
    {
        SaveManager.DeleteSave();
    }

}
