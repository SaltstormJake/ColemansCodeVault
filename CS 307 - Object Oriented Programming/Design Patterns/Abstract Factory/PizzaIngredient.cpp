//==========================================================
// PizzaIngredient.h
// Defines the parent class for all families of ingredients
//   and their subclasses.
// Author: Dr. Rick Coleman
//==========================================================
#include "PizzaIngredient.h"

//-----------------------------------
// Default constructor
//-----------------------------------
PizzaIngredient::PizzaIngredient()
{
}

//-----------------------------------
// Default constructor
//-----------------------------------
PizzaIngredient::~PizzaIngredient()
{
}

//-----------------------------------
// Default constructor
//-----------------------------------
void PizzaIngredient::setName(string n)
{
	name = n;
}

//-----------------------------------
// Default constructor
//-----------------------------------
string PizzaIngredient::getName()
{
	return name;
}
