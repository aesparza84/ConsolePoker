//Declaration file
#include "Suits.h"


#ifndef CARD_H
#define CARD_H

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

