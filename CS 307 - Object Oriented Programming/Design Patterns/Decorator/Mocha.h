//=================================================================================
// Mocha.h
// Interface file defining a concrete implementations of a decorator to demonstrate 
//   the Decorator Design Pattern.  This class is a sub-class of Beverage so that 
//   a decorator can be passed in place of the object it wraps.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef	MOCHA_H
#define MOCHA_H

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
	public:
		Mocha();
		~Mocha();
};
#endif