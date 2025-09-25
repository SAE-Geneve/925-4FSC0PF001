// DataStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <array>
#include <map>
#include <vector>
#include <print>
#include <iostream>

int main()
{
	std::array<int, 10> array_ = {0,1,2,3,4};
	
	for (int a : array_)
	{
		std::cout << a << "\n";
	}


	std::vector<int> vec;
	for (int v : array_)
	{
		std::cout << v << "\n";
	}


	std::map<std::string, int> map_;
	map_["seb"] = 10;
	map_["tom"] = 25;

	std::cout << map_["seb"] << "\n";

	for (auto map_element : map_)
	{
		std::cout << "key=" << map_element.first << " | value=" << map_element.second;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
