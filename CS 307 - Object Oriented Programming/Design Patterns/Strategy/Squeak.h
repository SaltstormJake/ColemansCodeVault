//======================================================================================
// Squeak.h
// Interface file defining a subclass for a family of quack algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehavior.h"

class Squeak : public QuackBehavior
{
	public:
		Squeak();		// Class constructor
		~Squeak();		// Class destructor
		void quack();	// All concrete implementations quack.
};

#endif