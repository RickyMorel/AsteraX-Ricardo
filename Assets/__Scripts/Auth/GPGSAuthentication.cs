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
        //if (IsConnectedToGooglePlay) { return; }

        //if (Platform == null)
        //{

        //    PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
        //    PlayGamesPlatform.InitializeInstance(config);
        //    PlayGamesPlatform.DebugLogEnabled = true;

        //    Platform = PlayGamesPlatform.Activate();
        //}

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

        //Social.Active.localUser.Authenticate(success =>
        //{
        //    if (success) { Debug.Log("Logged in Succesfully"); IsConnectedToGooglePlay = true; }
        //    else { Debug.Log("Failed to log in :("); IsConnectedToGooglePlay = false; }
        //});
    }

    private void ProcessAuthentication(bool success)
    {
        if (success) { Debug.Log("Logged in Succesfully"); IsConnectedToGooglePlay = true; }
        else { Debug.Log("Failed to log in :("); IsConnectedToGooglePlay = false; }
    }

    public void TrySendScoreToLeaderBoard()
    {
        if (!IsConnectedToGooglePlay) { return; }

        if (!AchievementManager.Instance.GotHighScore) { return; }

        Social.ReportScore(AchievementManager.Instance.HighScore, GPGSIds.leaderboard_asterax_leaderboard, LeaderboardUpdate);
    }

    private void LeaderboardUpdate(bool success)
    {
        if (success) { Debug.Log("Updated Leaderboard!"); }
        else { Debug.Log("Unable to update leaderboard :("); }
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
