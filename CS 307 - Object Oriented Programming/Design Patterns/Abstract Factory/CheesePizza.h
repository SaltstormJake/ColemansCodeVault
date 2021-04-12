//==========================================================
// CheesePizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class CheesePizza : public Pizza
{
	public:
		CheesePizza(PizzaIngredientFactory *pif);
		~CheesePizza();
		void setName(string n);
		string *getName();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif