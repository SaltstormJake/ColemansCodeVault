//==============================================================================
// ChicagoPizzaShop.cpp
// Implementation file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//==============================================================================
#include "ChicagoPizzaShop.h"
#include "ChicagoCheesePizza.h"
#include "ChicagoClamPizza.h"
#include "ChicagoPepperoniPizza.h"
#include "ChicagoVeggiePizza.h"

//----------------------------------------
// Default constructor
//----------------------------------------
ChicagoPizzaShop::ChicagoPizzaShop()
{
}

//----------------------------------------
// Destructor
//----------------------------------------
ChicagoPizzaShop::~ChicagoPizzaShop()
{
}

//----------------------------------------
// Create a pizza for this type of
//   pizza shop. This is a Factory
//   Method.
//----------------------------------------
Pizza *ChicagoPizzaShop::createPizza(string type)
{
	Pizza *pizza;

	// Create the requested type
	if(type == "cheese")
	   pizza = new ChicagoCheesePizza();
	else if(type == "clam")
	   pizza = new ChicagoClamPizza();
	else if(type == "pepperoni")
	   pizza = new ChicagoPepperoniPizza();
	else if(type == "veggie")
	   pizza = new ChicagoVeggiePizza();

	// When new pizza types are added we modify the code in this
	//  one place to add the new types

	return pizza;
}

