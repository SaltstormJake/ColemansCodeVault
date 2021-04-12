//=========================================================================
// PizzaShop.h
// Interface file for a parent class for sub-classes using a function that
//   demonstrates the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef PIZZASHOP_H
#define PIZZASHOP_H

#include "Pizza.h"
#include "string"

using namespace std;

class PizzaShop
{
	public:
		PizzaShop();
		~PizzaShop();
		Pizza *orderPizza(string type);
		virtual Pizza *createPizza(string type);
};

#endif
