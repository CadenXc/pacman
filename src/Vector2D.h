#ifndef VECTOR2D_H
#define VECTOR2D_H
#include <cmath>

namespace pacman
{
    //template <typename T>


    //using T = int;
    typedef int T;
    class Vector2D
    {
        public:
            Vector2D() : x( 0 ), y( 0 ) {}
            Vector2D( T x, T y ) : x( x ), y( y ) {}
            T* GetX() { return &x; }
            T* GetY() { return &y; }
            void SetX( T x ) { this->x = x; }
            void SetY( T y ) { this->y = y; }
            T Length() { return sqrt( x * x + y * y ); }

            void normalize()
            {
                T length = Length();
                if ( length == 0 ) {
                    return;
                }
                x /= length;
                y /= length;
            }

        private:
            T x;
            T y;
    };
}
#endif