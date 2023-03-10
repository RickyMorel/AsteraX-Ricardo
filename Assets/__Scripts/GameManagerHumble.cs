using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManagerHumble
{
    public GameState GameState { get; private set; }
    public GameState PrevGameState { get; private set; }
    public int Score { get; private set; }
    public int Jumps { get; private set; }
    public int Level { get; private set; }
    public bool IsInvunerable { get; private set; }


    public GameManagerHumble(int score, int jumps, int level, GameState gameState, bool isInvunerable)
    {
        GameState = gameState;
        Score = score;
        Jumps = jumps;
        Level = level;
        IsInvunerable = isInvunerable; 
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

        if (Jumps <= 0) { return; }

        Jumps--;
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
}
