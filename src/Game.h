#ifndef GAME_H
#define GAME_H

#include "GameState.h"
#include <list> 

class Game 
{
    public:
        Game(GameState *initialState);
        ~Game();

        int getFrameCount() const;
        bool isRunning() const;
        void popState();
        void pushState(GameState *state);
        void quit();
        void switchState(GameState *state);
        void update();

    private:
        std::list<GameState*> deadStateList;
        std::list<GameState*> stateStack;
        int frameCount;
};

#endif // GAME_H
