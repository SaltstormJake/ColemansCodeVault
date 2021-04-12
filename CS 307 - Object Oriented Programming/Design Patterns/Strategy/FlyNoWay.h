//======================================================================================
// FlyNoWay.h
// Interface file defining a subclass for a family of fly algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior
{
	public:
		FlyNoWay();				// Class constructor
		~FlyNoWay();			// Class destructor
		void fly();		// All concrete implementations fly.
};

#endif