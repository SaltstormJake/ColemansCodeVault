//==============================================================================
// PizzaShop.cpp
// Implementation file for a parent class for sub-classes using a function that
//   demonstrates the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//==============================================================================
#include "PizzaShop.h"

//----------------------------------------
// Default constructor
//----------------------------------------
PizzaShop::PizzaShop()
{
}

//----------------------------------------
// Destructor
//----------------------------------------
PizzaShop::~PizzaShop()
{
}

//----------------------------------------
// Order a pizza
//----------------------------------------
Pizza *PizzaShop::orderPizza(string type)
{
	Pizza *pizza;

	pizza = createPizza(type);
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}

//----------------------------------------
// Create a pizza.  Subclasses must
//  implement this Factory Method.
//----------------------------------------
Pizza *PizzaShop::createPizza(string type)
{
	return NULL;
}

