//===================================================================================
// RubberDuckie.h
// Interface file defining a class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#ifndef RUBBERDUCKIE_H
#define RUBBERDUCKIE_H

#include "Duck.h"

class RubberDuckie : public Duck
{
	public:
		RubberDuckie();			// Class constructor
		~RubberDuckie();		// Class destructor
		void Swim();			// Can I swim?
		void display();			// Show yourself, duck!
};
#endif