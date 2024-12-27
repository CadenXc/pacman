#ifndef GAMESTATE_H
#define GAMESTATE_H

namespace pacman
{
    class GameState
    {
    public:
        virtual void init() = 0;
        virtual void Run() = 0;
        virtual void Exit() = 0;

    }
}

#endif