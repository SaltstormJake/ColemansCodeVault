//=================================================================================
// Whip.h
// Interface file defining a concrete implementations of a decorator to demonstrate 
//   the Decorator Design Pattern.  This class is a sub-class of Beverage so that 
//   a decorator can be passed in place of the object it wraps.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef	WHIP_H
#define WHIP_H

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
	public:
		Whip();
		~Whip();
};
#endif