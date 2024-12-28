#include "Pacman.h"
#include "Vector2D.h"
#include <iostream>

namespace pacman
{
    Pacman::Pacman()
    : Character()
    {
        symbol = 'C';
        std::cout << "Pacman created" << std::endl;
    }

    Pacman::Pacman( char symbol )
    : Character( symbol )
    {
        std::cout << "Pacman created" << std::endl;
    }
    
    Pacman::Pacman( Vector2D position, char symbol )
    : Character( position, symbol )
    {
        std::cout << "Pacman created" << std::endl;
    }
    Pacman::~Pacman()
    {
        std::cout << "Pacman destroyed" << std::endl;
    }

    void Pacman::Render()
    {
        std::cout << "rendering Pacman" << std::endl;
    }

    void Pacman::Update()
    {
        std::cout << "updating Pacman" << std::endl;
    }
}