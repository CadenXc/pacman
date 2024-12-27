#ifndef CHARACTER_H
#define CHARACTER_H
/*This is a pure virtual class that will be inherited by the player and the ghosts*/
#include "Vector2D.h"

namespace pacman
{
    // I should review effictive c++ to see if I should make this class abstract
    class Character
    {
    public:
        Character() = default;
        Character(Vector2D position) : position(position) {}
        Character(T x, T y) : position(x, y) {}
        virtual ~Character() = default;

        virtual void Render() = 0;
        virtual void Update() = 0;

        Vector2D GetPosition() const { return position; }

    protected:
        Vector2D position;
    };
}
#endif