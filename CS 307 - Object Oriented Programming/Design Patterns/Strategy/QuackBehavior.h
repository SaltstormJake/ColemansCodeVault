//======================================================================================
// QuackBehavior.h
// Interface file defining a parent class for a family of quack algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

class QuackBehavior
{
	public:
		QuackBehavior();		// Class constructor
		~QuackBehavior();		// Class destructor
		virtual void quack();	// All concrete implementations quack.
};

#endif