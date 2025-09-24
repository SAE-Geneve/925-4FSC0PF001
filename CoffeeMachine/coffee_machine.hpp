#pragma once
#include <iostream>
#include <print>

constexpr float kStockMax = 10.0f;

enum class Product
{
	Expresso = 1,
	Lungo,
	Capuccino
};

class CoffeeMachine
{
private:
	float stock_;

public:

    Product DisplayMenu()
    {
        int input;

        std::println("Que puis je pour vous aujourd'hui ?");
        std::println("Espresso\tappuyer sur [1]");
        std::println("Lungo\t\tappuyer sur [2]");
        std::println("Cappucino\tappuyer sur [3]");
        std::cin >> input;

        // Controle de mauvaise saisie
        // Boucle tant que input n'est pas dans la range attendue, par ex

        return static_cast<Product>(input);

    }

	void Refill()
	{
		stock_ = kStockMax;
	}

	bool Serve(Product product)
	{

        if (stock_ <= 0)
        {
            // Something went wrong, no stock left
            return false;
        }

        switch (product)
        {
        case Product::Expresso:
            std::println("Espresso, for a busy day. LET'S GO TO WORK !!!!!!!!!!!");
            stock_ -= 1;
            break;
        case Product::Lungo:
            std::println("Chilling with my lungo friend....");
            stock_ -= 2;
            break;
        case Product::Capuccino:
            std::println("So sweeeeeeeeeeeeeeeeeeeeeeeeeeeeeeet");
            stock_ -= 1.5f;
            break;
        default:
            std::println("Pardon ????????");
            break;
        }

        std::string stock_str = std::format("Stock restant {}", stock_);
        std::cout << stock_str << "\n";

        return true;

	}

};

