//Declaration
#ifndef TABLE_H
#define TABLE_H

#include "Deck.h"
#include "Player.h"

class Table
{
private:
	Deck _deck;
	std::vector<Card> River;
	std::vector<Player> Players;
	int Pot;
	int Highestbet;

public:
	Table();
	
	int GetHighestBet();
	int GetPot();
	void AddToPot(int);
	void Payout(Player&);
	void InitRiver();
	void AddToRiver();
	void ShowRiver();
	void DistributeCards();

};

#endif // !TABLE_H
