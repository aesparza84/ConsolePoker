//Implementation file
#include"Deck.h"
#include<iostream>
#include<cstdlib>
#include<time.h>

Deck::Deck()
{
	CreateDeck();
};

void Deck::CreateDeck()
{
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
			_deck->push_back(Card(faces[n], suits[i]));
		}
	}
};

void Deck::ShuffleDeck()
{
	if (_deck == NULL)
	{
		return;
	}

	int randIndex = -1;
	int size = _deck->size();
	Card TempCard;

	srand(time(0));

	for (size_t i = 0; i < size; i++)
	{
		randIndex = rand() % size;

		TempCard =(*_deck)[randIndex];

		(*_deck)[randIndex] = (*_deck)[i];

		(*_deck)[i] = TempCard;
	}
}

void Deck::ShowDeck()
{
	if (_deck == NULL)
	{
		return;
	}

	for (size_t i = 0; i < _deck->size(); i++)
	{
		(*_deck)[i].DisplayCard();
	}
}
