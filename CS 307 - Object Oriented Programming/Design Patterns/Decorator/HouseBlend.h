//=================================================================================
// HouseBlend.h
// Interface file defining a concrete implementation of a class to be decorated to 
//   demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "Beverage.h"

class HouseBlend : public Beverage
{
	public:
		HouseBlend();
		~HouseBlend();
};
#endif