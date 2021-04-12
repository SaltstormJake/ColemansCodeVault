//=========================================================================
// ChicagoPizzaShop.h
// Interface file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef CHICAGOPIZZASHOP_H
#define CHICAGOPIZZASHOP_H

#include "PizzaShop.h"
#include "Pizza.h"
#include "string"

using namespace std;

class ChicagoPizzaShop : public PizzaShop
{
	public:
		ChicagoPizzaShop();
		~ChicagoPizzaShop();
		Pizza *createPizza(string type);
};

#endif
