#pragma once

enum class Dishes
{
	PIZZA,
	SALAD,
	PASTAS,
	DishesSize
};

enum class Drinks
{
	COFFEE,
	COCA,
	WATER
};

float GetPrice(Dishes dish)
{
	float price = 0;

	switch (dish)
	{
	case Dishes::PIZZA:
		price = 12.0f;
		break;
	case Dishes::SALAD:
		price = 20.0f;
		break;
	case Dishes::PASTAS:
		price = 6.0f;
		break;
	default:
		break;
	}

	return price;

}

float GetPrice(Drinks drink)
{
	switch (drink) {
	case Drinks::COFFEE:
		return 1;
	case Drinks::COCA:
		return 4;
	case Drinks::WATER:
		return 3;
	}
}

std::string GetName(Dishes dish)
{
	std::string name = "no_name";

	switch (dish) {
	case Dishes::PIZZA:
		name = "Pizza";
		break;
	case Dishes::SALAD:
		name = "Salad";
		break;
	case Dishes::PASTAS:
		name = "Pasta";
		break;
	}

	return name;
}

std::string GetName(Drinks drink)
{
	std::string name = "no_name";

	switch (drink) {
	case Drinks::COCA:
		name = "Coke with Ice";
		break;
	case Drinks::COFFEE:
		name = "Espresso";
		break;
	case Drinks::WATER:
		name = "Water";
		break;
	}

	return name;
}

void PutAnOrder(char inputChar)
{
	std::cout << "Thanks for your order : ";
	std::cout << inputChar << " - an order foo bar\n";
}