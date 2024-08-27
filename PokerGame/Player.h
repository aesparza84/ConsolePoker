//Decleration file
#ifndef PLAYER_H
#define PLAYER_H

#include "Hand.h"
#include "Table.h"
#include <string>

enum PlayerAction {CHECK, CALL, FOLD, RAISE};

class Player
{
private:
	bool SittingOut;
	Hand _hand;
	int credits;
	int currentBet;
	std::string name;
	Table refTable;

public:
	Player();
	Player(std::string, int);

	void AssignTable(Table&);
	void TableAction();

	void SetCardOne(Card);
	void SetCardTwo(Card);

	void AddCredits(int);
	void TakeCredits(int);

	Card GetCardOne();
	Card GetCardTwo();
};

#endif // !PLAYER_H
