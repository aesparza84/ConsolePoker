#include <iostream>
#include <cstdlib>
#include "Card.h"
#include "Deck.h"
#include "Table.h"

using std::cout;
using std::endl;


int main()
{
	Table _table;
	_table.InitRiver();
	_table.ShowRiver();

	return 0;
}