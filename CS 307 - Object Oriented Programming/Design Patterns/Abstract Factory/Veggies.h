//===============================================================
// Veggies.h
// Defines the parent class for a families of veggies ingredients.
// Author: Dr. Rick Coleman
//===============================================================
#ifndef VEGGIES_H
#define VEGGIES_H

#include "PizzaIngredient.h"

class Veggies : public PizzaIngredient
{
	public:
		Veggies();
		~Veggies();
};

#endif