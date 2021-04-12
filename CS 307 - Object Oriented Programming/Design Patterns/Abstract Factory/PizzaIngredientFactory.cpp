//==========================================================
// PizzaIngredientFactory.cpp
// Defines the parent interface class that all pizza factory
//   types must inherit.  this provides the interface for
//   creating families of products.
// Author: Dr. Rick Coleman
//==========================================================
#include "PizzaIngredientFactory.h"

//------------------------------------
// Default constructor
//------------------------------------
PizzaIngredientFactory::PizzaIngredientFactory()
{
}

//------------------------------------
// Destructor
//------------------------------------
PizzaIngredientFactory::~PizzaIngredientFactory()
{
}

//------------------------------------
// Create the dough. Virtual function
//  that all subclasses must implement
//------------------------------------
Dough *PizzaIngredientFactory::createDough()
{
	return NULL;
}

//------------------------------------
// Create the sauce. Virtual function
//  that all subclasses must implement
//------------------------------------
Sauce *PizzaIngredientFactory::createSauce()
{
	return NULL;
}

//------------------------------------
// Create the veggies. Virtual function
//  that all subclasses must implement
//------------------------------------
Veggies *PizzaIngredientFactory::createVeggies()
{
	return NULL;
}

//------------------------------------
// Create the cheese. Virtual function
//  that all subclasses must implement
//------------------------------------
Cheese *PizzaIngredientFactory::createCheese()
{
	return NULL;
}

//------------------------------------
// Create the pepperoni. Virtual function
//  that all subclasses must implement
//------------------------------------
Pepperoni *PizzaIngredientFactory::createPepperoni()
{
	return NULL;
}

//------------------------------------
// Create the clams. Virtual function
//  that all subclasses must implement
//------------------------------------
Clams *PizzaIngredientFactory::createClams()
{
	return NULL;
}

