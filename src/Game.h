#ifndef GAME_H
#define GAME_H

#include "Ghost.h"

namespace pacman
{

class Game 
{
    public:
        void init();
        void Run();
        void Exit();

        static Game* Instance() {
            if (instance == nullptr) {
                instance = new Game();
            }
            return instance;
        }

    private:
        Game();
        ~Game() {}

        Ghost ghost;

        static Game* instance;
};

}

#define IGame Game::Instance()
#endif