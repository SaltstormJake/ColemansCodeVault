//=================================================================
// Coffee.h
// Interface class defining a concrete class for a demonstration of
//   the Template Method Design Pattern
// Author:  Dr. Rick Coleman
//=================================================================
#ifndef COFFEE_H
#define COFFEE_H

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage
{
	public:
		Coffee();					 // Class constructor
		~Coffee();					 // Class destructor
		void brew();		 // Handle coffee brewing
		void addCondiments();// Handle adding coffee condiments
};

#endif