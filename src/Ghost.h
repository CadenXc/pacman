#ifndef GHOST_H
#define GHOST_H

#include "Character.h"

namespace pacman
{
    //This class will be inherited by the ghosts
    //or I can remove this class and just have the four ghost classes.
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