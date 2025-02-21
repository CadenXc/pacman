/*This class manages the game state changes.
This class contains the 'GameState' baseclass point's stack and
deal the game state change by the stack pop and push.
*/
#ifndef GAME_STATE_MaCHINE_H
#define GAME_STATE_MaCHINE_H

#include <stack>

#include "GameState.h"

namespace pacman
{
    /*
    class GameStateMachine 
    {
        public:
        void PushState( GameState* gameState );
        void ChangeState( GameState* gameState );
        void PopState();
        void PopAllStates();

        void UpdateState();
        void RenderState();

        private:
        GameStateMachine();
        
        //I remember effictive c++ maybe have a tip about this private destructor.
        ~GameStateMachine();

        std::stack< GameState* > gameStates;
    };
    */
}
#endif
