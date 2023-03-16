using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GameManagerHumble
{
    private string _levelProgression = "1:3/2,2:4/2,3:3/3,4:4/3,5:5/3,6:3/4,7:4/4,8:5/4,9:6/4,10:3/5";

    public GameState GameState { get; private set; }
    public GameState PrevGameState { get; private set; }
    public int Score { get; private set; }
    public int Jumps { get; private set; }
    public int Level { get; private set; }
    public bool IsInvunerable { get; private set; }
    public bool ShieldIsActive { get; private set; }
    public List<LevelData> LevelDataList { get; private set; } = new List<LevelData>();


    public GameManagerHumble(int score, int jumps, int level, GameState gameState, bool isInvunerable, bool shieldIsActive)
    {
        GameState = gameState;
        Score = score;
        Jumps = jumps;
        Level = level;
        IsInvunerable = isInvunerable;
        ShieldIsActive = shieldIsActive;

        ReadLevelsData();
    }

    public void SetGameState(GameState newState)
    {
        PrevGameState = GameState;

        GameState = newState;
    }

    public void Revive()
    {
        Jumps = 1;

        ReduceJumps();
    }

    public void ReduceJumps()
    {
        if (IsInvunerable) { return; }

        if (GameState != GameState.Playing) { return; }

        if (Jumps <= 0) { return; }

        Jumps--;
    }

    public void SetIsInvunerable(bool isInvunerable, int shieldIsActive = -1)
    {
        if (shieldIsActive != -1) { ShieldIsActive = shieldIsActive == 1; }

        //Don't set isInvunerable false if shield is active
        if (ShieldIsActive && !isInvunerable) { IsInvunerable = true; return; }

        IsInvunerable = isInvunerable;
    }

    public void RaiseLevel()
    {
        Level += 1;
    }

    public void AddScore(int amountAdded)
    {
        if (GameState != GameState.Playing) { return; }

        Score += amountAdded;
    }

    public LevelData GetCurrentLevelData()
    {
        if (Level > LevelDataList.Count)
        {
            LevelData levelData = new LevelData(LevelDataList[LevelDataList.Count - 1]);

            levelData.Level = Level;
            //Every 10 levels add one more asteroid
            levelData.Children = (levelData.Children - 2) + Mathf.FloorToInt((Level - 10) / 10);
            //Every level add an additional child
            int tensAmount = Mathf.FloorToInt(Level / 10);
            levelData.Asteroids = levelData.Asteroids + (Level - (tensAmount * 10));

            return levelData;
        }

        return LevelDataList[Level - 1];
    }

    private void ReadLevelsData()
    {
        string[] levelDataArray = _levelProgression.Split(",");

        //format for each entry is x:y/z
        foreach (string entry in levelDataArray)
        {
            string[] levelAndDataSplit = entry.Split(":");
            string[] asteroidsAndChildrenSplit = levelAndDataSplit[1].Split("/");

            int level = int.Parse(levelAndDataSplit[0].ToString());
            int asteroids = int.Parse(asteroidsAndChildrenSplit[0].ToString());
            int children = int.Parse(asteroidsAndChildrenSplit[1].ToString());

            LevelData levelData = new LevelData();
            levelData.Level = level;
            levelData.Asteroids = asteroids;
            levelData.Children = children;

            LevelDataList.Add(levelData);
        }

        //Organize data by levels
        LevelDataList.OrderBy(levelData => levelData.Level);
    }
}
