//Implementation
#include "Table.h"
#include<iostream>

Table::Table() 
{

}

void Table::RefreshTable()
{
	_deck.CreateDeck();
	Pot = 0;
}

void Table::DistributeCards()
{
	int size = Players.size();	
	//Give out cards
	
	//For the #'cards per hand
	for (int i = 0; i < 2; i++)
	{
		for (Player& p : Players)
		{
			Card c = _deck.GetNextCard();
			p.AddToHand(c);
		}
		
		Card d = _deck.GetNextCard();
		T_Dealer.AddToHand(d);
	}
	
}

void Table::AddPlayer(Player& p)
{
	Players.push_back(p);
}

void Table::DisplayAllHands()
{
	for (int i = 0; i < Players.size(); i++)
	{
		std::cout << i << ": ";
		Players[i].ShowHand();
		std::cout << "\n" << std::endl;
	}
}