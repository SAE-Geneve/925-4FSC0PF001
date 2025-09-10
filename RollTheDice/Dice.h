#pragma once
#include <array>
#include <cstdlib>
#include <iostream>




void InitDice()
{
	srand(time(nullptr));
}

int Draw(int diceSides)
{
	return 1 + rand() % diceSides;
}

bool CheckScore(int diceResult, int& scorePlayer)
{
	// Conditions de stop de la partie
	if (diceResult == 1)
	{
		scorePlayer = 0;
		return false;
	}

	scorePlayer += diceResult;

	if (scorePlayer > 20) {
		return false;
	}

	return true;

}

bool AskToContinue()
{
	char exitOrNot;

	std::cout << "Do you want to continue ?" << '\n';
	std::cin >> exitOrNot;

	return exitOrNot == 'y';

}


bool checkPlayersContinue(std::vector<bool> continues)
{
	for (bool continu : continues)
	{
		if (continu)
		{
			return true;
		}
	}

	return false;

}
