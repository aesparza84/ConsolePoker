//Declaration
#ifndef TABLE_H
#define TABLE_H

#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

class Table
{
	private:
		Dealer T_Dealer;
		Deck _deck;
		std::vector<Player> Players;
		int Pot;

	public:
		Table();

		void AddPlayer(Player&);
		void RefreshTable();
		void DistributeCards();
		void DisplayAllHands();
};

#endif // !TABLE_H
