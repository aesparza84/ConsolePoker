#include <iostream>
#include <cstdlib>
#include "Card.h"
#include "Deck.h"
#include "Table.h"

using std::cout;
using std::endl;


int main()
{
	Table t;

	for (int i = 0; i < 3; i++)
	{
		Player p;
		t.AddPlayer(p);
	}
	
	t.DistributeCards();

	t.DisplayAllHands();

	return 0;
}