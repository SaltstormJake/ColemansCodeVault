//===============================================================
// Pepperoni.h
// Defines the parent class for a families of pepperoni ingredients.
// Author: Dr. Rick Coleman
//===============================================================
#ifndef PEPPERONI_H
#define PEPPERONI_H

#include "PizzaIngredient.h"

class Pepperoni : public PizzaIngredient
{
	public:
		Pepperoni();
		~Pepperoni();
};

#endif