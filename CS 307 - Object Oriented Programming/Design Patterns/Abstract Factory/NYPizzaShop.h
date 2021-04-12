//=========================================================================
// NYPizzaShop.h
// Interface file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef NYPIZZASHOP_H
#define NYPIZZASHOP_H

#include "PizzaShop.h"
#include "Pizza.h"
#include "string"

using namespace std;

class NYPizzaShop : public PizzaShop
{
	public:
		NYPizzaShop();
		~NYPizzaShop();
		Pizza *createPizza(string type);
};

#endif
