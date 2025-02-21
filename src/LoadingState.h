#ifndef LOADINGSTATE_H
#define LOADINGSTATE_H

/**
 * This class used for loading the game settings and create game objects.
 */
#include "GameState.h"
class LoadingState : public GameState
{
public:
	LoadingState();
	~LoadingState();

	// TODO: I need to read code complete to think about how to define the name.
	void update();

private:

};

#endif // LODINGSTATE_H
