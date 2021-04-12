//======================================================================================
// Duck.h
// Interface file defining a parent class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef DUCK_H
#define DUCK_H

//#include "FlyBehavior.h"			Part of the Duck class in the Strategy demonstration
//#include "QuackBehavior.h"        but not needed here.  

class Duck
{
//	protected:
//		FlyBehavior	*fb;
//		QuackBehavior *qb;

	public:
		Duck();					// Class constructor
		~Duck();				// Class destructor
//		void SetFlyBehavior(FlyBehavior *fbeh);				See comment above.
//		void SetQuackBehavior(QuackBehavior *qbeh);
		void quack();			// All ducks quack, or do they?
		void swim();			// All ducks swim. Maybe?	Turkey ignores this.
		void fly();				// All ducks fly? Well...?
		virtual void display();	// Show yourself, duck!
};

#endif
