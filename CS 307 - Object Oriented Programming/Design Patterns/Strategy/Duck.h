//======================================================================================
// Duck.h
// Interface file defining a parent class for the Adapter design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
	protected:
		FlyBehavior	*fb;
		QuackBehavior *qb;

	public:
		Duck();					// Class constructor
		~Duck();				// Class destructor
		void SetFlyBehavior(FlyBehavior *fbeh);
		void SetQuackBehavior(QuackBehavior *qbeh);
		void quack();			// All ducks quack, or do they?
		void swim();			// All ducks swim. Maybe?
		void fly();				// All ducks fly? Well...?
		virtual void display();	// Show yourself, duck!
};

#endif