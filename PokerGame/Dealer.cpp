//Implementation file
#include "Dealer.h"

Dealer::Dealer()
{
	TotalValue = 0;
}

void Dealer::AddToHand(Card& c)
{
	TotalValue += c.value;
	D_Hand.push_back(c);
}

void Dealer::FinishHand(Deck& d)
{
	if (TotalValue > 16)
		return;

	Card c = d.GetNextCard();
	AddToHand(c);
}

void Dealer::ShowHand()
{
	for (Card c : D_Hand)
	{
		c.DisplayCard();
	}
}