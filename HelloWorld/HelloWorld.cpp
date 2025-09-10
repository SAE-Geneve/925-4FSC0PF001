#include <array>
#include <iostream>
#include <vector>

#include "functions.h"
#include "../RollTheDice/Dice.h"

void main()
{
	std::cout << "Result ? " << compute(12, 34) << "\n";
	std::cout << "Result ? " << compute(12.5f, 34.f) << "\n";

	int a = 0;
	int b = 7;
	int c = 8;

	for (int i = 0; i <= 25; ++i)
	{
		if (i == 6)
		{
			continue;
		}

		std::cout << "i ?" << i << "\n";

	}

	std::cout << "-----------------------------------------\n";


	for (auto i : { 'a', 'b', 'c', 'f' })
	{
		std::cout << "i ?" << i << "\n";

		switch (i)
		{
			case 'a':
				std::cout << "waaaaaah" << "\n";
				break;
			case 'f':
			case 'b':
				std::cout << "pppffffffffffffffff" << "\n";
				break;
			default:
				std::cout << "branche par défaut" << "\n";
				break;
		}
	}

	bool exitA = false;
	bool exitB = false;
	bool exitC = false;

	do
	{
		std::cout << "Run !!!!!!!!!!!!!!!!!!!!!!!!!\n";
	} while (exitA || (exitB && exitC));


	int size = 4;

	std::vector<int> scores;

	for (int i = 0; i < size; i++)
	{
		scores.emplace_back(0);
	}

	for (int s : scores)
	{
		std::cout << s;
	}

	for (int i = 0; i < size; i++)
	{
		scores.at(i) += Draw(6);
	}
}
