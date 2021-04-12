//==============================================================================
// CaliforniaPizzaShop.cpp
// Implementation file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//==============================================================================
#include "CaliforniaPizzaShop.h"
#include "CaliforniaCheesePizza.h"
#include "CaliforniaClamPizza.h"
#include "CaliforniaPepperoniPizza.h"
#include "CaliforniaVeggiePizza.h"

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
	Pizza *pizza;

	// Create the requested type
	if(type == "cheese")
	   pizza = new CaliforniaCheesePizza();
	else if(type == "clam")
	   pizza = new CaliforniaClamPizza();
	else if(type == "pepperoni")
	   pizza = new CaliforniaPepperoniPizza();
	else if(type == "veggie")
	   pizza = new CaliforniaVeggiePizza();

	// When new pizza types are added we modify the code in this
	//  one place to add the new types

	return pizza;
}

