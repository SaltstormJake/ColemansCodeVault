//==========================================================
// NTPizzaIngredientFactory.h
// Defines a concrete sub-class for a pizza factory.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

#include "PizzaIngredientFactory.h"
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
	public:
		NYPizzaIngredientFactory();
		~NYPizzaIngredientFactory();
		Dough *createDough();
		Sauce *createSauce();
		Veggies *createVeggies();
		Cheese *createCheese();
		Pepperoni *createPepperoni();
		Clams *createClams();
};

#endif