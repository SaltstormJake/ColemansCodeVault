//======================================================================================
// MuteDuck.h
// Interface file defining a subclass for a family of quack algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef MUTEDUCK_H
#define MUTEDUCK_H

#include "QuackBehavior.h"

class MuteDuck : public QuackBehavior
{
	public:
		MuteDuck();		// Class constructor
		~MuteDuck();	// Class destructor
		void quack();	// All concrete implementations quack.
};

#endif