//==============================================================================
// ChicagoPizzaShop.cpp
// Implementation file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//==============================================================================
#include "ChicagoPizzaShop.h"
#include "PizzaIngredientFactory.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

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
	Pizza *pizza = NULL;

	PizzaIngredientFactory *pif = new ChicagoPizzaIngredientFactory();

	// Create the requested type
	if(type == "cheese")
	{
	   pizza = new CheesePizza(pif);
	   pizza->setName("Chicago Style Cheese Pizza");
	}
	else if(type == "clam")
	{
	   pizza = new ClamPizza(pif);
	   pizza->setName("Chicago Style Clam Pizza");
	}
	else if(type == "pepperoni")
	{
	   pizza = new PepperoniPizza(pif);
	   pizza->setName("Chicago Style Pepperoni Pizza");
	}
	else if(type == "veggie")
	{
	   pizza = new VeggiePizza(pif);
	   pizza->setName("Chicago Style Veggie Pizza");
	}

	// When new pizza types are added we modify the code in this
	//  one place to add the new types

	return pizza;
}

