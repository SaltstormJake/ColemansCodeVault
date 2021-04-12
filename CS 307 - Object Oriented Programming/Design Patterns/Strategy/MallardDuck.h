//===================================================================================
// MallardDuck.h
// Interface file defining a class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"

class MallardDuck : public Duck
{
	public:
		MallardDuck();			// Class constructor
		~MallardDuck();			// Class destructor
		void Swim();			// Can I swim?
		void display();			// Show yourself, duck!
};
#endif