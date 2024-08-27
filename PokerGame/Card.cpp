//Implementation file
#include<iostream>
#include "Card.h"

Card::Card()
{
	//Empty Constructor
}

Card::Card(Face value, Suit suit)
{
	this->value = value;
	this->suit = suit;
}

void Card::DisplayCard()
{
	std::cout << FaceToInt[value] << SuitToString[suit] << " ";
}