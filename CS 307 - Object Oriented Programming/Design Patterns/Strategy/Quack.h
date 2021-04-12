//======================================================================================
// Quack.h
// Interface file defining a subclass for a family of quack algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef QUACK_H
#define QUACK_H

#include "QuackBehavior.h"

class Quack : public QuackBehavior
{
	public:
		Quack();		// Class constructor
		~Quack();		// Class destructor
		void quack();	// All concrete implementations quack.
};

#endif