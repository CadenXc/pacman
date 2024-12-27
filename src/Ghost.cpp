#include "Ghost.h"
#include "Vector2D.h"
#include <iostream>

namespace pacman
{
    Ghost::Ghost()
    {
        std::cout << "ghost created" << std::endl;
    }

    Ghost::~Ghost()
    {
        std::cout << "ghost destroyed" << std::endl;
    }

    void Ghost::Render()
    {
        std::cout << "rendering ghost" << std::endl;
    }

    void Ghost::Update()
    {
        std::cout << "updating ghost" << std::endl;
    }
}