//Declaration file
#ifndef SUITS_H
#define SUITS_H

#include <map> 
#include <string>

//Global enum
enum Suit { CLUB, SPADE, DIAMOND, HEART };

enum Face {
	ACE = 99, 
	TWO = 2,
	THREE = 3, 
	FOUR = 4, 
	FIVE = 5,
	SIX = 6, 
	SEVEN = 7,
	EIGHT = 8, 
	NINE = 9, 
	TEN = 10, 
	JACK = 11,
	QUEEN = 12,
	KING = 13
};

//Declare the map
extern std::map<Suit, std::string> SuitToString; //extern allows this ONE map to be used where its included
extern std::map<Face, std::string> FaceToInt; //extern allows this ONE map to be used where its included

#endif // !SUITS_H


