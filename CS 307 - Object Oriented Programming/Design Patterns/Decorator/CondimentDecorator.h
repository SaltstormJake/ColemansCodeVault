//=================================================================================
// CondimentDecorator.h
// Interface file defining the parent class for all concrete implementations of a
//   decorator to demonstrate the Decorator Design Pattern.  This class is a sub-
//   class of Beverage so that a decorator can be passed in place of the object it
//   wraps.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef	CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
	public:
		CondimentDecorator();
		~CondimentDecorator();
};
#endif