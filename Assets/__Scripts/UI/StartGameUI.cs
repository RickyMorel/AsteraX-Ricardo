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

    public void DeleteSave()
    {
        SaveManager.DeleteSave();
    }

}
