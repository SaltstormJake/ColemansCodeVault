//==========================================================
// PepperoniPizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class PepperoniPizza : public Pizza
{
	public:
		PepperoniPizza(PizzaIngredientFactory *pif);
		~PepperoniPizza();
		void setName(string n);
		string *getName();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif