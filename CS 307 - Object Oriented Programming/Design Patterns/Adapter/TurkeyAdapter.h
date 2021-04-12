//===================================================================================
// TurkeyAdapter.h
// Interface file defining a class for the Adapter design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck
{
	private:
		Turkey	*turkey;
	public:
		TurkeyAdapter(Turkey *t);	// Class constructor
		~TurkeyAdapter();			// Class destructor
		void quack();				// Adapt the duck quack call
		void fly();					// Adapt the duck fly call
};
#endif