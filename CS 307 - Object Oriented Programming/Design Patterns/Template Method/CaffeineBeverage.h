//=================================================================
// CaffeineBeverage.h
// Interface class defining a parent class for a demonstration of
//   the Template Method Design Pattern
// Author:  Dr. Rick Coleman
//=================================================================
#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H

class CaffeineBeverage
{
	public:
		CaffeineBeverage();			 // Class constructor
		~CaffeineBeverage();		 // Class destructor
		void prepareRecipe();		 // Prepare the beverage
		void boilWater();			 // Same for all beverages
		virtual void brew();		 // This part of the algorithm varies
		void pourInCup();			 // Same for all beverages
		virtual void addCondiments();// This part of the algorithm varies
};

#endif