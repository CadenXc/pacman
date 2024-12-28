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
        std::cout << "game is running" << std::endl;
        Update();
        Render();
    }

    void Game::Exit()
    {
        delete instance;
        std::cout << "game is exiting" << std::endl;
    }

    void Game::Update()
    {
        std::cout << "game is updating" << std::endl;
    }

    void Game::Render()
    {
        std::cout << "game is rendering" << std::endl;
    }
}