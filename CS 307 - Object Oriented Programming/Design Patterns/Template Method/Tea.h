//=================================================================
// Tea.h
// Interface class defining a concrete class for a demonstration of
//   the Template Method Design Pattern
// Author:  Dr. Rick Coleman
//=================================================================
#ifndef TEA_H
#define TEA_H

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage
{
	public:
		Tea();				 // Class constructor
		~Tea();				 // Class destructor
		void brew();		 // Handle tea steeping
		void addCondiments();// Handle adding tea condiments
};

#endif