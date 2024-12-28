#include "src/Game.h"

#include <iostream>

int main() 
{
    //std::cout << "hello, pacman" << std::endl;
    pacman::IGame->init();
    pacman::IGame->Run();
    pacman::IGame->Exit();
    return 0;
}