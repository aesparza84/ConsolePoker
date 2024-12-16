//Decleration file
#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include<vector>
#include <string>

enum PlayerAction {HIT, STAY, NONE};

class Player
{
	private:
		bool SittingOut;
		int credits;
		int currentBet;
		int CardTotal;
		std::string name;
		std::vector<Card> P_Hand;

	public:
		Player();
		Player(std::string, int);

		PlayerAction TableAction();

		void AddCredits(int);
		void TakeCredits(int);
		void AddToHand(Card&);

		void ShowHand();
};

#endif // !PLAYER_H
