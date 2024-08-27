//Implementation
#include "Table.h"

Table::Table() 
{

}

void Table::DistributeCards()
{
	int size = Players.size();

	for (size_t i = 0; i < size; i++)
	{
		Players[i].SetCardOne(_deck.GetNextCard());
	}

	for (size_t i = 0; i < size; i++)
	{
		Players[i].SetCardTwo(_deck.GetNextCard());
	}
}

int Table::GetPot()
{
	return Pot;
}

int Table::GetHighestBet()
{
	return Highestbet;
}

void Table::InitRiver()
{
	River.clear();

	for (size_t i = 0; i < 3; i++)
	{
		_deck.DiscardNext();
		River.push_back(_deck.GetNextCard());
	}
}

void Table::AddToRiver()
{
	_deck.DiscardNext();
	River.push_back(_deck.GetNextCard());
}

void Table::ShowRiver()
{
	int size = River.size();
	for (size_t i = 0; i < size; i++)
	{
		River[i].DisplayCard();
	}
}

void Table::AddToPot(int value)
{
	Pot += value;
}

void Table::Payout(Player& winner)
{
	winner.AddCredits(Pot);
	Pot = 0;
}