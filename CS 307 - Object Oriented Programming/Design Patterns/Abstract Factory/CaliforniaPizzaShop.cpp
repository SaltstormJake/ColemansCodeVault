//==============================================================================
// CaliforniaPizzaShop.cpp
// Implementation file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//==============================================================================
#include "CaliforniaPizzaShop.h"
#include "PizzaIngredientFactory.h"
#include "CaliforniaPizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

//----------------------------------------
// Default constructor
//----------------------------------------
CaliforniaPizzaShop::CaliforniaPizzaShop()
{
}

//----------------------------------------
// Destructor
//----------------------------------------
CaliforniaPizzaShop::~CaliforniaPizzaShop()
{
}

//----------------------------------------
// Create a pizza for this type of
//   pizza shop. This is a Factory
//   Method.
//----------------------------------------
Pizza *CaliforniaPizzaShop::createPizza(string type)
{
	Pizza *pizza = NULL;

	PizzaIngredientFactory *pif = new CaliforniaPizzaIngredientFactory();

	// Create the requested type
	if(type == "cheese")
	{
	   pizza = new CheesePizza(pif);
	   pizza->setName("California Style Cheese Pizza");
	}
	else if(type == "clam")
	{
	   pizza = new ClamPizza(pif);
	   pizza->setName("California Style Clam Pizza");
	}
	else if(type == "pepperoni")
	{
	   pizza = new PepperoniPizza(pif);
	   pizza->setName("California Style Pepperoni Pizza");
	}
	else if(type == "veggie")
	{
	   pizza = new VeggiePizza(pif);
	   pizza->setName("California Style Veggie Pizza");
	}

	// When new pizza types are added we modify the code in this
	//  one place to add the new types

	return pizza;
}

