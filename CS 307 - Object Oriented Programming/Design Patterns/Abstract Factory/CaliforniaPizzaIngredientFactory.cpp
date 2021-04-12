//==========================================================
// CaliforniaPizzaIngredientFactory.cpp
// Defines the parent interface class that all pizza factory
//   types must inherit.  this provides the interface for
//   creating families of products.
// Author: Dr. Rick Coleman
//==========================================================
#include "CaliforniaPizzaIngredientFactory.h"

// Include the appropriate headers for this type of pizza factory
#include "VeryThinCrustDough.h"
#include "BruschettaSauce.h"
#include "Veggies.h"
#include "Mushrooms.h"
#include "Spinach.h"
#include "BlackOlives.h"
#include "GoatCheese.h"
#include "ChoppedPepperoni.h"
#include "Calamari.h"

//------------------------------------
// Default constructor
//------------------------------------
CaliforniaPizzaIngredientFactory::CaliforniaPizzaIngredientFactory()
{
}

//------------------------------------
// Destructor
//------------------------------------
CaliforniaPizzaIngredientFactory::~CaliforniaPizzaIngredientFactory()
{
}

//------------------------------------
// Create the dough. Virtual function
//  that all subclasses must implement
//------------------------------------
Dough *CaliforniaPizzaIngredientFactory::createDough()
{
	return new VeryThinCrustDough();
}

//------------------------------------
// Create the sauce. Virtual function
//  that all subclasses must implement
//------------------------------------
Sauce *CaliforniaPizzaIngredientFactory::createSauce()
{
	return new BruschettaSauce();
}

//------------------------------------
// Create the veggies. Virtual function
//  that all subclasses must implement
//------------------------------------
Veggies *CaliforniaPizzaIngredientFactory::createVeggies()
{
	Veggies *veggies = new Veggies[3];
	veggies[0] = *(new Mushrooms());
	veggies[1] = *(new Spinach());
	veggies[2] = *(new BlackOlives());
	return veggies;
}

//------------------------------------
// Create the cheese. Virtual function
//  that all subclasses must implement
//------------------------------------
Cheese *CaliforniaPizzaIngredientFactory::createCheese()
{
	return new GoatCheese();
}

//------------------------------------
// Create the pepperoni. Virtual function
//  that all subclasses must implement
//------------------------------------
Pepperoni *CaliforniaPizzaIngredientFactory::createPepperoni()
{
	return new ChoppedPepperoni();
}

//------------------------------------
// Create the clams. Virtual function
//  that all subclasses must implement
//------------------------------------
Clams *CaliforniaPizzaIngredientFactory::createClams()
{
	return new Calamari();
}

