#pragma once
#include <unordered_map>
#include <iostream>
#include <print>
#include "product_item.hpp"

constexpr float kStockMax = 5.0f;

enum class ProductChoice
{
	Expresso = 'e',
	Lungo = 'l',
	Capuccino = 'c'
};

class CoffeeMachine
{
private:
	float stock_;
	std::unordered_map<ProductChoice, ProductItem> items_;

public:

	CoffeeMachine();

	ProductChoice DisplayMenu();
	void Refill();
	bool Serve(ProductChoice product);


};

