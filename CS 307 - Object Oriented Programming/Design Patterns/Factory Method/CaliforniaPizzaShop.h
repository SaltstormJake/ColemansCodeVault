//=========================================================================
// CaliforniaPizzaShop.h
// Interface file for a concrete class using a function that demonstrates
//    the Factory Method Design Pattern.
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef CALIFORNIAPIZZASHOP_H
#define CALIFORNIAPIZZASHOP_H

#include "PizzaShop.h"
#include "Pizza.h"
#include "string"

using namespace std;

class CaliforniaPizzaShop : public PizzaShop
{
	public:
		CaliforniaPizzaShop();
		~CaliforniaPizzaShop();
	protected:
		Pizza *createPizza(string type);
};

#endif
