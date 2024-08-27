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

void Player::AssignTable(Table& table)
{
	refTable = table;
}

void Player::TableAction()
{
	if (SittingOut)
	{
		return; //This player has folded
	}


	std::cout << "1. Check\n2. Call\n3. Raise\n4. Fold" << std::endl;

	PlayerAction action = PlayerAction::CHECK;
	int input = -1;

	while (true)
	{
		std::cin >> input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (input > 0 && input < 5)
		{
			if (input == 1)
			{
				action = PlayerAction::CHECK;

			}
			else if (input == 2)
			{
				action = PlayerAction::CALL;
			}
			else if (input == 3)
			{
				action = PlayerAction::RAISE;
			}
			else if (input == 4)
			{

			}
		}
		else
		{
			std::cout << "Not valid input" << std::endl;
		}
	}
}

void Player::SetCardOne(Card newCard)
{
	_hand.firstCard = newCard;
}

void Player::SetCardTwo(Card newCard)
{
	_hand.secondCard = newCard;
}

void Player::AddCredits(int changeVal)
{
	credits += changeVal;
}

void Player::TakeCredits(int changeVal)
{
	credits -= changeVal;
}

Card Player::GetCardOne()
{
	return _hand.firstCard;
}

Card Player::GetCardTwo()
{
	return _hand.secondCard;
}