//============================================================
// Pizza.cpp
// Defines the parent class that all pizza types must inherit.
// Author: Dr. Rick Coleman
//============================================================
#include "Pizza.h"

//---------------------------------------
// Default constructor
//---------------------------------------
Pizza::Pizza()
{
		dough = NULL;
		sauce = NULL;
		veggies = NULL;
		cheese = NULL;
		pepperoni = NULL;
		clams = NULL;
		pizzaIngredientFactory = NULL;

}
//---------------------------------------
// Default constructor
//---------------------------------------
Pizza::Pizza(PizzaIngredientFactory *pif)
{
		dough = NULL;
		sauce = NULL;
		veggies = NULL;
		cheese = NULL;
		pepperoni = NULL;
		clams = NULL;
		pizzaIngredientFactory = pif;

}

//---------------------------------------
// Destructor
//---------------------------------------
Pizza::~Pizza()
{
}

//---------------------------------------
// Set the name (type) of this pizza.
//---------------------------------------
void Pizza::setName(string n)
{
}
//---------------------------------------
// Get the pizza name. 
//---------------------------------------
string *Pizza::getName()
{
	return NULL;
}

//---------------------------------------
// Prepare the pizza. Virtual function 
//  that all subclasses must implement.
//---------------------------------------
void Pizza::prepare()
{
}
//---------------------------------------
// Bake the pizza. Virtual function 
//  that all subclasses must implement.
//---------------------------------------
void Pizza::bake()
{
}
//---------------------------------------
// Cut the pizza. Virtual function 
//  that all subclasses must implement.
//---------------------------------------
void Pizza::cut()
{
}
//---------------------------------------
// Box the pizza. Virtual function 
//  that all subclasses must implement.
//---------------------------------------
void Pizza::box()
{
}
