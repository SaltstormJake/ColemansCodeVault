//==========================================================
// ClamPizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CLAMPIZZA_H
#define CLAMPIZZA_H

#include "Pizza.h"

class ClamPizza : public Pizza
{
	public:
		ClamPizza(PizzaIngredientFactory *pif);
		~ClamPizza();
		void setName(string n);
		string *getName();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif