//==========================================================
// VeggiePizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class VeggiePizza : public Pizza
{
	public:
		VeggiePizza(PizzaIngredientFactory *pif);
		~VeggiePizza();
		void setName(string n);
		string *getName();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif