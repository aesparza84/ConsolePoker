//Declaration file
#ifndef CARD_H
#define CARD_H

#include "Suits.h"

class Card
{
	public:
		Suit suit;
		Face value;

		//Methods
		Card(Face, Suit);
		Card();
		void DisplayCard();
};

#endif // !CARD_H

