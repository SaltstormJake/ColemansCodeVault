//===============================================================
// Sauce.h
// Defines the parent class for a families of sauce ingredients.
// Author: Dr. Rick Coleman
//===============================================================
#ifndef SAUCE_H
#define SAUCE_H

#include "PizzaIngredient.h"

class Sauce : public PizzaIngredient
{
	public:
		Sauce();
		~Sauce();
};

#endif