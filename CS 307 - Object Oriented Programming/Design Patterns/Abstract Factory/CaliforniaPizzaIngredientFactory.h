//==========================================================
// NTPizzaIngredientFactory.h
// Defines a concrete sub-class for a pizza factory.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef CALIFORNIAPIZZAINGREDIENTFACTORY_H
#define CALIFORNIAPIZZAINGREDIENTFACTORY_H

#include "PizzaIngredientFactory.h"
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"

class CaliforniaPizzaIngredientFactory : public PizzaIngredientFactory
{
	public:
		CaliforniaPizzaIngredientFactory();
		~CaliforniaPizzaIngredientFactory();
		Dough *createDough();
		Sauce *createSauce();
		Veggies *createVeggies();
		Cheese *createCheese();
		Pepperoni *createPepperoni();
		Clams *createClams();
};

#endif