//Implementation file
#include "Suits.h"
#include <string>

//Define the map
std::map<Suit, std::string> SuitToString
{
	{CLUB, "\u2663"},
	{SPADE, "\u2660"},
	{DIAMOND, "\u2666"},
	{HEART, "\u2665"}
};

std::map<Face, std::string> FaceToInt
{
	{ACE , "A"},
	{TWO , "2"},
	{THREE , "3"},
	{FOUR , "4"},
	{FIVE , "5"},
	{SIX , "6"},
	{SEVEN , "7"},
	{EIGHT , "8"},
	{NINE , "9"},
	{TEN , "10"},
	{JACK , "J"},
	{QUEEN , "Q"},
	{KING , "K"}
};

