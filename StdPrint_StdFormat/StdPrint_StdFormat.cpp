// StdPrint_StdFormat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <print>
#include <conio.h>

int main()
{

    int var2 = 36;

    for (int counter = 0; counter < 10; ++counter)
    {
       std::cout << std::format("Counter = {} ? {} \n", counter, var2);
    }

}