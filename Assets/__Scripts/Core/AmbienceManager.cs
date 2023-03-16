using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmbienceManager : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private LevelAmbienceSO _levelAmbienceSo;
    [SerializeField] private Transform _starFieldParticles;

    [Header("UI")]
    [SerializeField] private LevelUI _levelUI;

    #endregion

    private void Awake()
    {
        GameManager.OnLevelUpdated += TrySetNewLevelAmbience;
    }

    private void OnDestroy()
    {
        GameManager.OnLevelUpdated -= TrySetNewLevelAmbience;
    }

    private void TrySetNewLevelAmbience(int level)
    {
        //if previous level was a ten behind, return
        if (Mathf.FloorToInt(level - 1) == Mathf.FloorToInt(level)) { return; }

        LevelAmbienceData levelAmbienceData = _levelAmbienceSo.GetLevelAmbience(level);

        //Destroy all previous particles
        foreach (Transform child in _starFieldParticles)
        {
            if (child == _starFieldParticles) { continue; }

            Destroy(child.gameObject);
        }

        StartCoroutine(WaitToSpawnAmbienceParticles(levelAmbienceData));

        Camera[] allCameras = FindObjectsOfType<Camera>();

        foreach (Camera camera in allCameras)
        {
            camera.backgroundColor = levelAmbienceData.BackgroundColor;
        }

        _levelUI.SetPanelColor(levelAmbienceData.BackgroundColor);
    }

    private IEnumerator WaitToSpawnAmbienceParticles(LevelAmbienceData levelAmbienceData)
    {
        yield return new WaitForEndOfFrame();

        if (levelAmbienceData.StarObj != null) { Instantiate(levelAmbienceData.StarObj, _starFieldParticles.transform); }
    }
}
