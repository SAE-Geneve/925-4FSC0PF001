// Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <print>
#include "restaurant.h"
#include <conio.h>

constexpr char ESC = 27;

int main()
{

    
    // New and Smart way : C++ 23
    std::println("Dishes ================================");
    for (int dishIndex = 0; dishIndex < static_cast<int>(Dishes::DishesSize); ++dishIndex)
    {
        Dishes dish = static_cast<Dishes>(dishIndex);
        std::string entry = std::format("{} - {} : {} CHF", dishIndex, GetName(dish), GetPrice(dish));
        std::cout << entry << "\n";
    }

    // Old way and rough way: C++ 20
    std::println("Drinks ================================");
    std ::cout << "1 - " << GetName(Drinks::COCA) << " : " << std::to_string(GetPrice(Drinks::COCA)) << "\n";
    std ::cout << "2 - " << GetName(Drinks::COFFEE) << " : " << std::to_string(GetPrice(Drinks::COFFEE)) << "\n";
    std ::cout << "3 - " << GetName(Drinks::WATER) << " : " << std::to_string(GetPrice(Drinks::WATER)) << "\n";
    

    do {

        std::cout << "\nPlease put an order >";
        char inputChar = _getch();
        std::cout << inputChar << "\n";
        // Do you exit ?
        if (inputChar == ESC) break;
        // Do you order ?
        PutAnOrder(inputChar);

    } while (true);


}

