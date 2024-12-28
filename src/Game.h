#ifndef GAME_H
#define GAME_H

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

        void Update();
        void Render();

        static Game* instance;
};

}

#define IGame Game::Instance()
#endif