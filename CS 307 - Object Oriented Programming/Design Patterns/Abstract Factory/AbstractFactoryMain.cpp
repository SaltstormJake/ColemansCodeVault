//=============================================================
// AbstractFactoryMain.cpp
// Demonstrates the Abstract Factory design pattern
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

	cout << "Harvey walks into a New York Pizza Shop to order some pizzas...\n\n";
	nyps = new NYPizzaShop();
	cout << "   I'd like a cheese pizza\n";
	thePizza = nyps->orderPizza("cheese");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a clam pizza\n";
	thePizza = nyps->orderPizza("clam");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a pepperoni pizza\n";
	thePizza = nyps->orderPizza("pepperoni");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a veggie pizza\n";
	thePizza = nyps->orderPizza("veggie");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n\n";

	cout << "Marilyn walks into a Chicago Pizza Shop to order some pizzas...\n\n";
	chps = new ChicagoPizzaShop();
	cout << "   I'd like a cheese pizza\n";
	thePizza = chps->orderPizza("cheese");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a clam pizza\n";
	thePizza = chps->orderPizza("clam");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a pepperoni pizza\n";
	thePizza = chps->orderPizza("pepperoni");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a veggie pizza\n";
	thePizza = chps->orderPizza("veggie");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n\n";

	cout << "Manuel walks into a California Pizza Shop to order some pizzas...\n\n";
	clps = new CaliforniaPizzaShop();
	cout << "   I'd like a cheese pizza\n";
	thePizza = clps->orderPizza("cheese");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a clam pizza\n";
	thePizza = clps->orderPizza("clam");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a pepperoni pizza\n";
	thePizza = clps->orderPizza("pepperoni");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n";
	cout << "   I'd like a veggie pizza\n";
	thePizza = clps->orderPizza("veggie");
	cout << "   Here is your " << *(thePizza->getName()) << endl;
	cout << "\n\n";

	cout << "\n\nIts pizza party time....... \n\n\n";
	return 0;
}

