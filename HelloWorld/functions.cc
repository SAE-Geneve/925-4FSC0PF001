#include "functions.h"

#include <iostream>

int compute(int a, int b)
{
	std::cout << "int calculation\n";
	return a + b;
}

float compute(float a, float b)
{
	std::cout << "float calculation\n";
	return a + b;
}