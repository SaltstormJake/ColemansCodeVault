//=================================================================================
// Milk.h
// Interface file defining a concrete implementations of a decorator to demonstrate 
//   the Decorator Design Pattern.  This class is a sub-class of Beverage so that 
//   a decorator can be passed in place of the object it wraps.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef	MILK_H
#define MILK_H

#include "CondimentDecorator.h"

class Milk : public CondimentDecorator
{
	public:
		Milk();
		~Milk();
};
#endif