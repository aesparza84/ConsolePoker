//Delaration file
#ifndef DECK_H
#define DECK_H	

#include"Card.h"
#include<vector>
#include<stack>

class Deck
{
	private:
		std::vector<Card> _deck;
		std::stack<Card> _shuffledDeck;

	public:
		Deck();
		void CreateDeck();
		void ShuffleDeck();
		Card GetNextCard();
		void DiscardNext();

		void ShowDeck();
};

#endif // !DECK_H
