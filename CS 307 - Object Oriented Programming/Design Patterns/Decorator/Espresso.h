//=================================================================================
// Espresso.h
// Interface file defining a concrete implementation of a class to be decorated to 
//   demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "Beverage.h"

class Espresso : public Beverage
{
	public:
		Espresso();
		~Espresso();
};
#endif