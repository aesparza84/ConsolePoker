//Decleration file
#ifndef DEALER_H
#define DEALER_H

#include "Card.h"
#include "Deck.h"
#include <vector>

class Dealer
{
private:
	int TotalValue;
	std::vector<Card> D_Hand;

public:
	Dealer();

	void AddToHand(Card&);
	void FinishHand(Deck&);
	void ShowHand();

};


#endif // !DEALER.H
