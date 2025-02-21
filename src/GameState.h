/*This class is a base class for all game states(Menu, Play)
*/
#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState
{
public:
	GameState(bool throttle = false);
	virtual ~GameState() {}

	virtual void update() = 0;

	bool isThrottled() const { return throttle; }

private:
	// If true, the game state will only update every other frame
	bool throttle;

	virtual void onResume() {}
};

#endif // GAMESTATE_H