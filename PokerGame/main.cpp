#include <iostream>
#include <cstdlib>
#include "Card.h"
#include "Deck.h"

using std::cout;
using std::endl;


int main()
{
	//Card
	Card testCard(ACE, SPADE);
	Card testCard2(TWO, CLUB);
	Card testCard3(THREE, DIAMOND);
	Card testCard4(FOUR, HEART);

	testCard.DisplayCard();
	testCard2.DisplayCard();
	testCard3.DisplayCard();
	testCard4.DisplayCard();

	//Deck
	/*Deck myDeck;
	myDeck.ShuffleDeck();
	myDeck.ShowDeck();*/




	return 0;
}