//==============================================================================
// NYPizzaShop.cpp
// Implementation file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//==============================================================================
#include "NYPizzaShop.h"
#include "PizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

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
	Pizza *pizza = NULL;

	PizzaIngredientFactory *pif = new NYPizzaIngredientFactory();

	// Create the requested type
	if(type == "cheese")
	{
	   pizza = new CheesePizza(pif);
	   pizza->setName("New York Style Cheese Pizza");
	}
	else if(type == "clam")
	{
	   pizza = new ClamPizza(pif);
	   pizza->setName("New York Style Clam Pizza");
	}
	else if(type == "pepperoni")
	{
	   pizza = new PepperoniPizza(pif);
	   pizza->setName("New York Style Pepperoni Pizza");
	}
	else if(type == "veggie")
	{
	   pizza = new VeggiePizza(pif);
	   pizza->setName("New York Style Veggie Pizza");
	}

	// When new pizza types are added we modify the code in this
	//  one place to add the new types

	return pizza;
}

