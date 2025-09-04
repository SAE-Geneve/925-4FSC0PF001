#include <iostream>

#include "Dice.h"


int main()
{

	int scorePlayerOne = 0;
	int scorePlayerTwo = 0;

	bool playerOneDone = false;
	bool playerTwoDone = false;

	int diceResult = 0;
	char exitOrNot = 'n';

	// Comment on fait pour jouer à plusieurs ?
	// Est ce qu'on peut factoriser des éléments ?
	InitDice();

	do
	{

		diceResult = Draw(6);
		std::cout << "DICE = " << diceResult << '\n';

		// Conditions de stop de la partie
		if (diceResult == 1)
		{
			scorePlayerOne = 0;
		}
		else
		{
			scorePlayerOne += diceResult;
		}

		if (diceResult == 1 || scorePlayerOne > 20)
		{
			std::cout << "Game Over !!!!!!!!!!!!!!!!!!\n";
		}else
		{
						std::cout << "Do you want to stop ?" << '\n';
			std::cin >> exitOrNot;
		}

		std::cout << "SCORE = " << scorePlayerOne << '\n';


	} while (exitOrNot != 'y' && diceResult != 1 && scorePlayerOne <= 20);

}
