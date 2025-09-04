#pragma once
#include <cstdlib>

void InitDice()
{
	srand(time(nullptr));
}

int Draw(int diceSides)
{
	return 1 + rand() % diceSides;
}
