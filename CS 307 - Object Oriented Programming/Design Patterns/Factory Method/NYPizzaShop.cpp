//==============================================================================
// NYPizzaShop.cpp
// Implementation file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//==============================================================================
#include "NYPizzaShop.h"
#include "NYCheesePizza.h"
#include "NYClamPizza.h"
#include "NYPepperoniPizza.h"
#include "NYVeggiePizza.h"

//----------------------------------------
// Default constructor
//----------------------------------------
NYPizzaShop::NYPizzaShop()
{
}

//----------------------------------------
// Destructor
//----------------------------------------
NYPizzaShop::~NYPizzaShop()
{
}

//----------------------------------------
// Create a pizza for this type of
//   pizza shop. This is a Factory
//   Method.
//----------------------------------------
Pizza *NYPizzaShop::createPizza(string type)
{
	Pizza *pizza;

	// Create the requested type
	if(type == "cheese")
	   pizza = new NYCheesePizza();
	else if(type == "clam")
	   pizza = new NYClamPizza();
	else if(type == "pepperoni")
	   pizza = new NYPepperoniPizza();
	else if(type == "veggie")
	   pizza = new NYVeggiePizza();

	// When new pizza types are added we modify the code in this
	//  one place to add the new types

	return pizza;
}

