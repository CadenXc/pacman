/*This class will be used to create the ghosts in the game,
I will set the AI pattern for defferent ghosts(pinky,inky,blinky,clyde), so that I
could not make four different classes for each ghost.
*/
#ifndef GHOST_H
#define GHOST_H

#include "Character.h"

namespace pacman
{
    class Ghost : public Character
    {
    public:
        Ghost();
        virtual ~Ghost();

        void Render() override;
        void Update() override;
    };
}

#endif