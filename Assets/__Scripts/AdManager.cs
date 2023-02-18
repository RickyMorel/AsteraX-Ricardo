using UnityEngine;
using UnityEngine.Advertisements;

public class AdManager : MonoBehaviour, IUnityAdsListener
{
    [SerializeField] private bool _testMode = true;

#if UNITY_ANDROID
    private string gameId = "5169297";
#elif UNITY_IOS
    private string gameId = "5169296";
#endif

    public static AdManager Instance;

    private void Awake()
    {
        if(Instance != null && Instance != this)
        {
            Destroy(Instance);
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);

            Advertisement.AddListener(this);
            Advertisement.Initialize(gameId, _testMode);
        }
    }
    public void OnUnityAdsDidError(string message)
    {
        Debug.Log("Unity ads error: " + message);
    }

    public void ShowAd()
    {
#if UNITY_ANDROID
    Advertisement.Show("Rewarded_Android");
#elif UNITY_IOS
        Advertisement.Show("Rewarded_iOS");
#endif
    }

    public void OnUnityAdsDidFinish(string placementId, ShowResult showResult)
    {
        switch (showResult)
        {
            case ShowResult.Finished:
                GameManager.Instance.Revive();
                break;
            case ShowResult.Skipped:
                GameManager.Instance.GameOver();
                break;
            case ShowResult.Failed:
                Debug.Log("Ad Failed");
                GameManager.Instance.GameOver();
                break;
        }
    }

    public void OnUnityAdsDidStart(string placementId)
    {
        Debug.Log("Unity ads started: " + placementId);
    }

    public void OnUnityAdsReady(string placementId)
    {
        Debug.Log("Unity ads ready: " + placementId);
    }
}
