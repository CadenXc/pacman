/*This is a base class for the characters in the game

*/
#ifndef CHARACTER_H
#define CHARACTER_H

#include "Vector2D.h"

namespace pacman
{
    /*
    // ****** I should review effictive c++ to see if I should make this class abstract
    class Character
    {
    public:
        Character() : position( 0, 0 ), symbol( ' ' ) {};
        Character( char symbol ) : position( 0, 0 ), symbol( symbol ) {};
        Character( Vector2D position, char symbol ) : position( position ), symbol( symbol ) {}
        Character( T x, T y,char symbol ) : position( x, y ), symbol( symbol ) {}
        virtual ~Character() = default;

        virtual void Render() = 0;
        virtual void Update() = 0;

        Vector2D GetPosition() const { return position; }

        char GetSymbol() const { return symbol; }

    protected:
        Vector2D position;

        //maybe string is better.
        char symbol; // The character that will be rendered on the screen
    };
*/
}
#endif
