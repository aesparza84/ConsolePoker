//Implementation file
#include"Deck.h"
#include<iostream>
#include<cstdlib>
#include<time.h>

Deck::Deck()
{
	CreateDeck();
	ShuffleDeck();
};

void Deck::CreateDeck()
{
	if (&_deck == NULL)
	{
		return;
	}

	_deck.clear();

	Suit suits[] = {HEART, SPADE, CLUB, DIAMOND};

	Face faces[] = {
		{ACE },
		{TWO },
		{THREE},
		{FOUR },
		{FIVE },
		{SIX },
		{SEVEN},
		{EIGHT},
		{NINE },
		{TEN },
		{JACK },
		{QUEEN},
		{KING }
	};


	int SuitSize = sizeof(suits) / sizeof(Suit);
	int FaceSize = sizeof(faces) / sizeof(Face);

	for (size_t i = 0; i < SuitSize; i++)
	{
		for (size_t n = 0; n < FaceSize; n++) 
		{
			_deck.push_back(Card(faces[n], suits[i]));
		}
	}
};

void Deck::ShuffleDeck()
{

	int randIndex = -1;
	int size = _deck.size();
	Card TempCard;

	srand(time(0));

	for (size_t i = 0; i < size; i++)
	{
		randIndex = rand() % size;

		TempCard =_deck[randIndex];
		_shuffledDeck.push(TempCard);

		//(*_deck)[randIndex] = (*_deck)[i];
		//(*_deck)[i] = TempCard;
	}
}

Card Deck::GetNextCard()
{
	Card tempCard;
	tempCard = _shuffledDeck.top();
	_shuffledDeck.pop();
	
	return tempCard;
}

void Deck::DiscardNext()
{
	_shuffledDeck.pop();
}

void Deck::ShowDeck()
{
	for (size_t i = 0; i < _deck.size(); i++)
	{
		_deck[i].DisplayCard();
	}
}
