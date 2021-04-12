//======================================================================================
// DecoyDuck.h
// Interface file defining a parent class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef DECOYDUCK_H
#define DECOYDUCK_H

#include "Duck.h"

class DecoyDuck : public Duck
{
	public:
		DecoyDuck();			// Class constructor
		~DecoyDuck();			// Class destructor
		void Swim();			// Can I swim?
		void display();			// Show yourself, duck!
};

#endif