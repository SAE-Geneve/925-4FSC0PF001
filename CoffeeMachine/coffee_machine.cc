#include "coffee_machine.hpp"

CoffeeMachine::CoffeeMachine()
{
	items_[ProductChoice::Expresso] = ProductItem("Expresso", 1, "for a busy day. LET'S GO TO WORK !!!!!!!!!!!");
	items_[ProductChoice::Lungo] = ProductItem("Lungo", 2, "Chilling with my lungo friend....");
	items_[ProductChoice::Capuccino] = ProductItem("Capuccino", 1.5, "So sweeeeeeeeeeeeeeeeeeeeeeeeeeeeeeet");
}


ProductChoice CoffeeMachine::DisplayMenu()
{
	char input;

	std::println("Que puis je pour vous aujourd'hui ?");

	for (auto item : items_)
	{
		std::cout << std::format("{} : Appuyer sur {}\n", item.second.name_, static_cast<char>(item.first));
	}

	std::cin >> input;

	// Controle de mauvaise saisie
	// Boucle tant que input n'est pas dans la range attendue, par ex

	return static_cast<ProductChoice>(input);

}

void CoffeeMachine::Refill()
{
	stock_ = kStockMax;
}

bool CoffeeMachine::Serve(ProductChoice product)
{

	if (items_.find(product) == items_.end())
	{
		std::println("Pardon ????????");
		return true;
	}

	ProductItem chosenItem = items_[product];

	if (stock_ < chosenItem.beanCost_)
	{
		return false;
	}

	std::println("{} , {}", chosenItem.name_, chosenItem.message_);
	stock_ -= chosenItem.beanCost_;

	std::string stock_str = std::format("Stock restant {}", stock_);
	std::cout << stock_str << "\n";

	return true;

}
