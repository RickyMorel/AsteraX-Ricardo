using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;

public class GPGSAuthentication : MonoBehaviour
{
    public static GPGSAuthentication Instance { get; private set; }
    public static PlayGamesPlatform Platform;
    public bool IsConnectedToGooglePlay;

    private string _debugString;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }

        DontDestroyOnLoad(gameObject);

        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
    }

    private void Start()
    {
        LoginToGooglePlay();
    }

    private void LoginToGooglePlay()
    {
        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptOnce, (result) =>
        {
            switch (result)
            {
                case SignInStatus.Success:
                    _debugString = $"Sucessful Login!  : {result.ToString()}";
                    Debug.Log(_debugString);
                    IsConnectedToGooglePlay = true;
                    break;
                default:
                    _debugString = $"Failed to log in :(  ; {result.ToString()}";
                    Debug.Log(_debugString);
                    IsConnectedToGooglePlay = false;
                    break;
            }
        });
    }

    public void TrySendScoreToLeaderBoard()
    {
        _debugString = "TrySendScoreToLeaderBoard";

        if (!IsConnectedToGooglePlay) { return; }

        _debugString = "Is Connected To Google Play!";

        if (!AchievementManager.Instance.GotHighScore) { return; }

        _debugString = "Got High Score!";

        Social.ReportScore(AchievementManager.Instance.HighScore, GPGSIds.leaderboard_fyouasteroids_leaderboard, LeaderboardUpdate);
    }

    private void LeaderboardUpdate(bool success)
    {
        if (success) { _debugString = "Updated Leaderboard!"; Debug.Log(_debugString); }
        else { _debugString = "Unable to update leaderboard :(";  Debug.Log(_debugString); }
    }

    public void ShowLeaderboard()
    {
        Debug.Log("TryShowLeaderBoards");
        if (!IsConnectedToGooglePlay) { LoginToGooglePlay(); return; }

        Social.ShowLeaderboardUI();
    }

    void OnGUI()
    {
        GUI.Label(new Rect(10, 10, 1000, 25), _debugString);
    }
}
