//===================================================================================
// TurkeyAdapter.cpp
// Implementation file defining a class for the Adapter design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#include "TurkeyAdapter.h"

//----------------------------------
// Class constructor
//----------------------------------
TurkeyAdapter::TurkeyAdapter(Turkey *t)
{
	turkey = t;
}

//----------------------------------
// Class destructor
//----------------------------------
TurkeyAdapter::~TurkeyAdapter()
{
}
			
//----------------------------------
// Adapt the duck quack call
//----------------------------------
void TurkeyAdapter::quack()
{
	turkey->gobble();
}
				
//----------------------------------
// Adapt the duck fly call
//----------------------------------
void TurkeyAdapter::fly()
{
	// Turkeys fly in a series of short hops
	for(int i=0; i<5; i++)
	{
		turkey->fly();
	}
}
