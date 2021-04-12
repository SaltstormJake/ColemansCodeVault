//======================================================================================
// FlyBehavior.h
// Interface file defining a parent class for a family of fly algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

class FlyBehavior
{
	public:
		FlyBehavior();				// Class constructor
		~FlyBehavior();				// Class destructor
		virtual void fly();			// All concrete implementations fly.
};

#endif