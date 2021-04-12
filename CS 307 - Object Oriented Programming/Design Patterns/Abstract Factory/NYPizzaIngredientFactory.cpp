//==========================================================
// NYPizzaIngredientFactory.cpp
// Defines the parent interface class that all pizza factory
//   types must inherit.  this provides the interface for
//   creating families of products.
// Author: Dr. Rick Coleman
//==========================================================
#include "NYPizzaIngredientFactory.h"

// Include the appropriate headers for this type of pizza factory
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "Veggies.h"
#include "Mushrooms.h"
#include "Onions.h"
#include "RedPeppers.h"
#include "ReggianoCheese.h"
#include "ThinSlicedPepperoni.h"
#include "FreshClams.h"

//------------------------------------
// Default constructor
//------------------------------------
NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{
}

//------------------------------------
// Destructor
//------------------------------------
NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
{
}

//------------------------------------
// Create the dough. Virtual function
//  that all subclasses must implement
//------------------------------------
Dough *NYPizzaIngredientFactory::createDough()
{
	return new ThinCrustDough();
}

//------------------------------------
// Create the sauce. Virtual function
//  that all subclasses must implement
//------------------------------------
Sauce *NYPizzaIngredientFactory::createSauce()
{
	return new MarinaraSauce();
}

//------------------------------------
// Create the veggies. Virtual function
//  that all subclasses must implement
//------------------------------------
Veggies *NYPizzaIngredientFactory::createVeggies()
{
	Veggies *veggies = new Veggies[3];
	veggies[0] = *(new Mushrooms());
	veggies[1] = *(new Onions());
	veggies[2] = *(new RedPeppers());
	return veggies;
}

//------------------------------------
// Create the cheese. Virtual function
//  that all subclasses must implement
//------------------------------------
Cheese *NYPizzaIngredientFactory::createCheese()
{
	return new ReggianoCheese();
}

//------------------------------------
// Create the pepperoni. Virtual function
//  that all subclasses must implement
//------------------------------------
Pepperoni *NYPizzaIngredientFactory::createPepperoni()
{
	return new ThinSlicedPepperoni();
}

//------------------------------------
// Create the clams. Virtual function
//  that all subclasses must implement
//------------------------------------
Clams *NYPizzaIngredientFactory::createClams()
{
	return new FreshClams();
}

