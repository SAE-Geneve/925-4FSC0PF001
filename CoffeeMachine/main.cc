// CoffeeMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <print>

#include "coffee_machine.hpp"

void main()
{
    bool continuer = true;
    char input;

    CoffeeMachine coffee_machine;

    std::println("Bienvenue chez Nespresso as a Terminal service");
    coffee_machine.Refill();

    do
    {
        Product productChosen = coffee_machine.DisplayMenu();

		if (!coffee_machine.Serve(productChosen))
        {
            std::println("Stock vide, Remplir y/n ?");
            std::cin >> input;

            if (input == 'y')
            {
                coffee_machine.Refill();
            }else
            {
                //std::println("A bientot chez Nespresso as a Terminal service");
                break;
            }
        }

    	std::println("Continuer y/[other key] ?");
        std::cin >> input;

        continuer = (input == 'y');

        system("cls");


    } while (continuer);

    std::println("A bientot chez Nespresso as a Terminal service");

}

