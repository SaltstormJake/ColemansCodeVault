//===================================================================================
// RedheadDuck.h
// Interface file defining a class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#ifndef REDHEADDUCK_H
#define REDHEADDUCK_H

#include "Duck.h"

class RedheadDuck : public Duck
{
	public:
		RedheadDuck();			// Class constructor
		~RedheadDuck();			// Class destructor
		void Swim();			// Can I swim?
		void display();			// Show yourself, duck!
};
#endif