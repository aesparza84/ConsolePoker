//Decleration file
#include "Hand.h"
#include <string>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	Hand _hand;
	int currency;
	std::string name;

public:
	Player();
	Player(std::string, int);
	
	void SetCardOne(Card);
	void SetCardTwo(Card);

	void UpdateCurrency(int);

	Card GetCardOne();
	Card GetCardTwo();
};

#endif // !PLAYER_H
