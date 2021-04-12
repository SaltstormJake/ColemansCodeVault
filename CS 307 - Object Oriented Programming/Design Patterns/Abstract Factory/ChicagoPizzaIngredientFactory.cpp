//==========================================================
// ChicagoPizzaIngredientFactory.cpp
// Defines the parent interface class that all pizza factory
//   types must inherit.  this provides the interface for
//   creating families of products.
// Author: Dr. Rick Coleman
//==========================================================
#include "ChicagoPizzaIngredientFactory.h"

// Include the appropriate headers for this type of pizza factory
#include "ThickCrustDough.h"
#include "PlumTomatoSauce.h"
#include "Veggies.h"
#include "Eggplant.h"
#include "Spinach.h"
#include "BlackOlives.h"
#include "MozzarellaCheese.h"
#include "ThickSlicedPepperoni.h"
#include "FrozenClams.h"

//------------------------------------
// Default constructor
//------------------------------------
ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{
}

//------------------------------------
// Destructor
//------------------------------------
ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory()
{
}

//------------------------------------
// Create the dough. Virtual function
//  that all subclasses must implement
//------------------------------------
Dough *ChicagoPizzaIngredientFactory::createDough()
{
	return new ThickCrustDough();
}

//------------------------------------
// Create the sauce. Virtual function
//  that all subclasses must implement
//------------------------------------
Sauce *ChicagoPizzaIngredientFactory::createSauce()
{
	return new PlumTomatoSauce();
}

//------------------------------------
// Create the veggies. Virtual function
//  that all subclasses must implement
//------------------------------------
Veggies *ChicagoPizzaIngredientFactory::createVeggies()
{
	Veggies *veggies = new Veggies[3];
	veggies[0] = *(new Eggplant());
	veggies[1] = *(new Spinach());
	veggies[2] = *(new BlackOlives());
	return veggies;
}

//------------------------------------
// Create the cheese. Virtual function
//  that all subclasses must implement
//------------------------------------
Cheese *ChicagoPizzaIngredientFactory::createCheese()
{
	return new MozzarellaCheese();
}

//------------------------------------
// Create the pepperoni. Virtual function
//  that all subclasses must implement
//------------------------------------
Pepperoni *ChicagoPizzaIngredientFactory::createPepperoni()
{
	return new ThickSlicedPepperoni();
}

//------------------------------------
// Create the clams. Virtual function
//  that all subclasses must implement
//------------------------------------
Clams *ChicagoPizzaIngredientFactory::createClams()
{
	return new FrozenClams();
}

