//============================================================
// Pizza.h
// Defines the parent class that all pizza types must inherit.
// Author: Dr. Rick Coleman
//============================================================
#ifndef PIZZA_H
#define PIZZA_H

#include "PizzaIngredientFactory.h"
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"

#include <string>

using namespace std;

class Pizza
{
	protected:
		string name;
		Dough *dough;
		Sauce *sauce;
		Veggies *veggies;  // Pointer to array of veggies
		Cheese *cheese;
		Pepperoni *pepperoni;
		Clams *clams;
		PizzaIngredientFactory *pizzaIngredientFactory;

	public:
		Pizza();
		Pizza(PizzaIngredientFactory *pif);
		~Pizza();
		virtual void setName(string n);
		virtual string *getName();
		virtual void prepare();
		virtual void bake();
		virtual void cut();
		virtual void box();
};
#endif