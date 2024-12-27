#include "src/Game.h"



int main() 
{
    pacman::IGame->init();
    pacman::IGame->Run();
    pacman::IGame->Exit();

    return 0;
}