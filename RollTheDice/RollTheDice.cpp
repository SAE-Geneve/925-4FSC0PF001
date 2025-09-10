#include <array>
#include <iostream>
#include <vector>

#include "Dice.h"

int main()
{

	std::vector<bool> continues;
	std::vector<int> scores;
	int nbPlayers = 3;

	int diceResult = 0;
	char exitOrNot = 'n';

	std::cout << "Nombre de joueurs ?\n";
	std::cin >> nbPlayers;

	for (int i = 0; i < nbPlayers; ++i)
	{
		continues.push_back(true);
		scores.emplace_back(0);
	}

	InitDice();

	do
	{

		std::cout << "New Turn -------------------------------------\n\n";

		for (int idxPlayer = 0; idxPlayer < nbPlayers; ++idxPlayer)
		{
			std::cout << "\n";
			std::cout << "Player " << idxPlayer << "\n";

			if (!continues[idxPlayer])
			{
				std::cout << "Pass ---" << "\n";
				continue;
			}

			diceResult = Draw(6);
			std::cout << "Dice = " << diceResult << '\n';

			continues[idxPlayer] = CheckScore(diceResult, scores[idxPlayer]);

			if (continues[idxPlayer])
			{
				continues[idxPlayer] = AskToContinue();
			}

			std::cout << "Score = " << scores[idxPlayer] << '\n';
			std::cout << " = = = = = = = = = = = = = = = = = = = = = =\n";

		}

	}while (checkPlayersContinue(continues));


	int bestScore = 0;
	int idxWinner = -1;

	for (int idxPlayer = 0; idxPlayer < nbPlayers; idxPlayer++)
	{
		if (scores[idxPlayer] > bestScore)
		{
			bestScore = scores[idxPlayer];
			idxWinner = idxPlayer;
		}
	}

	if (idxWinner != -1)
	{
		std::cout << "GG Player #" << idxWinner << " WON !!!!!!!!!!!\n";
	}else
	{
		std::cout << "Nobody wins :(\n";
	}




}

