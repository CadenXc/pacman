#include "Game.h"

#include <iostream>

namespace pacman
{
    Game* Game::instance = nullptr;

    Game::Game() {}

    void Game::init()
    {

        std::cout << "game is initializing" << std::endl;
    }

    void Game::Run()
    {
        ghost.Render();
        std::cout << "game is running" << std::endl;
    }

    void Game::Exit()
    {
        delete instance;
        std::cout << "game is exiting" << std::endl;
    }
}