//Implementation
#include "GameRunner.h"

GameRunner::GameRunner() 
{
	currentState = GameState::SETUP;
	GameOver = false;
}

void GameRunner::RunGame()
{
	if (&_table == NULL)
	{
		return;
	}

	while (!GameOver)
	{
		switch (currentState)
		{
			case SETUP:
				

				break;
			case FLOWING:

				break;
			case STANDOFF:

				break;
			default:
				break;
		}
	}
}