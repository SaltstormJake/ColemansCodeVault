//=================================================================================
// Decaf.h
// Interface file defining a concrete implementation of a class to be decorated to 
//   demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef DECAF_H
#define DECAF_H

#include "Beverage.h"

class Decaf : public Beverage
{
	public:
		Decaf();
		~Decaf();
};
#endif