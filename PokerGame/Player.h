//Decleration file
#include "Hand.h"
#include <string>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	Hand _hand;
	int credits;
	std::string name;

public:
	Player();
	Player(std::string, int);
	
	void SetCardOne(Card);
	void SetCardTwo(Card);

	void AddCredits(int);
	void TakeCredits(int);

	Card GetCardOne();
	Card GetCardTwo();
};

#endif // !PLAYER_H
