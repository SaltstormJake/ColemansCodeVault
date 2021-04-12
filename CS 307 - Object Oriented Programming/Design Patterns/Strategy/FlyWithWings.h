//======================================================================================
// FlyWithWings.h
// Interface file defining a subclass for a family of fly algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "FlyBehavior.h"

class FlyWithWings : public FlyBehavior
{
	public:
		FlyWithWings();		// Class constructor
		~FlyWithWings();	// Class destructor
		void fly();			// All concrete implementations fly.
};

#endif