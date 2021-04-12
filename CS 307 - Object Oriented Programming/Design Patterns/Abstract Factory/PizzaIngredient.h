//==========================================================
// PizzaIngredient.h
// Defines the parent class for all families of ingredients
//   and their subclasses.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef PIZZAINGREDIENT_H
#define PIZZAINGREDIENT_H

#include <string>

using namespace std;

class PizzaIngredient
{
	protected:
		string name;

	public:
		PizzaIngredient();
		~PizzaIngredient();
		void setName(string n);
		string getName();
};

#endif