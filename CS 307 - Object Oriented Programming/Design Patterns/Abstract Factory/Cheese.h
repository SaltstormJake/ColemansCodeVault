//===============================================================
// Cheese.h
// Defines the parent class for a families of cheese ingredients.
// Author: Dr. Rick Coleman
//===============================================================
#ifndef CHEESE_H
#define CHEESE_H

#include "PizzaIngredient.h"

class Cheese : public PizzaIngredient
{
	public:
		Cheese();
		~Cheese();
};

#endif