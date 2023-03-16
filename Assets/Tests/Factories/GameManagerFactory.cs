namespace Tests.Factories
{
    public class GameManagerBuilder
    {
        private GameState _gameState = GameState.Playing;
        private int _score;
        private int _jumps;
        private int _level;
        private bool _isInvunerable;
        private bool _shieldIsActive;

        public GameManagerBuilder WithGameState(GameState gameState)
        {
            _gameState = gameState;
            return this;
        }

        public GameManagerBuilder WithScore(int score)
        {
            _score = score;
            return this;
        }

        public GameManagerBuilder WithIsInvunerable(bool isInvunerable)
        {
            _isInvunerable = isInvunerable;
            return this;
        }

        public GameManagerBuilder WithJumps(int jumps)
        {
            _jumps = jumps;
            return this;
        }

        public GameManagerBuilder WithLevel(int level)
        {
            _level = level;
            return this;
        }

        public GameManagerBuilder WithShieldIsActive(bool isActive)
        {
            _shieldIsActive = isActive;
            return this;
        }

        public GameManagerHumble Build()
        {
            return new GameManagerHumble(_score, _jumps, _level, _gameState, _isInvunerable, _shieldIsActive);
        }
    }

    public static class GameManagerFactory
    {
        public static GameManagerBuilder AGameManager => new GameManagerBuilder();
    }
}
