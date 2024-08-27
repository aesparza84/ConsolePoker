//Declaration
#ifndef GAMERUNNER_H
#define GAMERUNNER_H

#include "Table.h"

enum GameState{SETUP, FLOWING, STANDOFF};

class GameRunner
{
private:
	GameState currentState;
	bool GameOver;
	Table _table;

public:
	GameRunner();

	void RunGame();
	void SetupPhase();
	void FlowingPhase();
	void StandOff();

};

#endif // !GAMERUNNER_H
