//Implementation file
#include "Player.h"

Player::Player() { };

Player::Player(std::string nameValue, int startValue)
{
	//Init name
	name = nameValue;

	//Init currency
	credits = 0;
	AddCredits(startValue);
};

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