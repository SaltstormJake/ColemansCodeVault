//===============================================================
// Dough.h
// Defines the parent class for a families of dough ingredients.
// Author: Dr. Rick Coleman
//===============================================================
#ifndef DOUGH_H
#define DOUGH_H

#include "PizzaIngredient.h"

class Dough : public PizzaIngredient
{
	public:
		Dough();
		~Dough();
};

#endif