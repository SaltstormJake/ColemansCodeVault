//=============================================================
// FactoryMethodMain.cpp
// Demonstrates the Factory Method design pattern
//=============================================================
#include "Pizza.h"
#include "NYPizzaShop.h"
#include "ChicagoPizzaShop.h"
#include "CaliforniaPizzaShop.h"
#include "iostream"

using namespace std;

int main(void)
{
	NYPizzaShop			*nyps;
	ChicagoPizzaShop	*chps;
	CaliforniaPizzaShop *clps;
	Pizza				*thePizza;

	cout << "Harvey walks into a New York Pizza Shop to order some pizzas.\n";
	nyps = new NYPizzaShop();
	cout << "   I'd like a cheese pizza\n";
	thePizza = nyps->orderPizza("cheese");
	cout << "   I'd like a clam pizza\n";
	thePizza = nyps->orderPizza("clam");
	cout << "   I'd like a pepperoni pizza\n";
	thePizza = nyps->orderPizza("pepperoni");
	cout << "   I'd like a veggie pizza\n";
	thePizza = nyps->orderPizza("veggie");
	cout << "\n\n";

	cout << "Marilyn walks into a Chicago Pizza Shop to order some pizzas.\n";
	chps = new ChicagoPizzaShop();
	cout << "   I'd like a cheese pizza\n";
	thePizza = chps->orderPizza("cheese");
	cout << "   I'd like a clam pizza\n";
	thePizza = chps->orderPizza("clam");
	cout << "   I'd like a pepperoni pizza\n";
	thePizza = chps->orderPizza("pepperoni");
	cout << "   I'd like a veggie pizza\n";
	thePizza = chps->orderPizza("veggie");
	cout << "\n\n";

	cout << "Manuel walks into a California Pizza Shop to order some pizzas.\n";
	clps = new CaliforniaPizzaShop();
	cout << "   I'd like a cheese pizza\n";
	thePizza = clps->orderPizza("cheese");
	cout << "   I'd like a clam pizza\n";
	thePizza = clps->orderPizza("clam");
	cout << "   I'd like a pepperoni pizza\n";
	thePizza = clps->orderPizza("pepperoni");
	cout << "   I'd like a veggie pizza\n";
	thePizza = clps->orderPizza("veggie");
	cout << "\n\n";

	cout << "\n\nIts pizza party time....... \n";
	return 0;
}

