//==========================================================
// PizzaIngredientFactory.h
// Defines the parent interface class that all pizza factory
//   types must inherit.  this provides the interface for
//   creating families of products.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H

#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"

class PizzaIngredientFactory
{
	public:
		PizzaIngredientFactory();
		~PizzaIngredientFactory();
		virtual Dough *createDough();
		virtual Sauce *createSauce();
		virtual Veggies *createVeggies();
		virtual Cheese *createCheese();
		virtual Pepperoni *createPepperoni();
		virtual Clams *createClams();
};

#endif