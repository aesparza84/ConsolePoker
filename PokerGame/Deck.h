//Delaration file
#include"Card.h"
#include<vector>


#ifndef DECK_H
#define DECK_H	

class Deck
{
	private:
		std::vector<Card> _deck[52];

	public:
		Deck();
		void CreateDeck();
		void ShuffleDeck();
		//Card GetRandomCard();

		void ShowDeck();
};

#endif // !DECK_H
