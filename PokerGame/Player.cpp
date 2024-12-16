//Implementation file
#include "Player.h"
#include <iostream>
#include <cstdlib>

Player::Player() { SittingOut = false; };

Player::Player(std::string nameValue, int startValue)
{
	SittingOut = false;

	//Init name
	name = nameValue;

	//Init currency
	credits = 0;
	AddCredits(startValue);
};

PlayerAction Player::TableAction()
{
	if (SittingOut)
		return NONE; //This player has finished

	int val = -1;
	std::cin >> val;
	while (val != 1 && val != 2)
	{
		//Clear the input flag state 
		std::cin.clear(); 

		//Clear the input stream for unwatned characters
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		
		std::cout << "Enter a valid input" << std::endl;
		
		//Get input
		std::cin >> val;
	}
	
	if (val == 1)
		return HIT;
	if (val == 2)
		return STAY;
}

void Player::AddCredits(int changeVal)
{
	credits += changeVal;
}

void Player::TakeCredits(int changeVal)
{
	credits -= changeVal;
}

void Player::AddToHand(Card& card)
{
	P_Hand.push_back(card);
}

void Player::ShowHand()
{
	for (Card c : P_Hand)
	{
		c.DisplayCard();
	}
}
