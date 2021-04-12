//=================================================================================
// Observer.h
// Interface file defining the parent class for all concrete implementations of an
//   observer to demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef OBSERVER_H
#define OBSERVER_H

#include "Subject.h"

class Observer
{
	public:
		Observer();							// Default constructor
		~Observer();						// Destructor
		virtual void update(Subject *s);	// Update the data being observed
};

#endif