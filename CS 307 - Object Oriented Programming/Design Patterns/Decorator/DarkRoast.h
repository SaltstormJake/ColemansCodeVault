//=================================================================================
// DarkRoast.h
// Interface file defining a concrete implementation of a class to be decorated to 
//   demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef DARKROAST_H
#define DARKROAST_H

#include "Beverage.h"

class DarkRoast : public Beverage
{
	public:
		DarkRoast();
		~DarkRoast();
};
#endif