//===================================================================================
// Duck.cpp
// Implementation of the parent class for demonstration of the Strategy Design 
//	pattern.
// Author: Dr. Rick Coleman
//===================================================================================
#include "Duck.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Class constructor
//-----------------------------------
Duck::Duck()
{
}

//-----------------------------------
// Class destructor
//-----------------------------------
Duck::~Duck()
{
}
			
//-----------------------------------
// Set the fly behaivor
//-----------------------------------
void Duck::SetFlyBehavior(FlyBehavior *fbeh)
{
	fb = fbeh;
}

//-----------------------------------
// Set the quack behavior
//-----------------------------------
void Duck::SetQuackBehavior(QuackBehavior *qbeh)
{
	qb = qbeh;
}

//-----------------------------------
// All ducks quack, or do they?
//-----------------------------------
void Duck::quack()
{
	qb->quack();
}
		
//-----------------------------------
// All ducks swim. Maybe?
//-----------------------------------
void Duck::swim()
{
	cout << "Can generic ducks swim?\n";
}

//-----------------------------------
// All ducks fly. Well...?
//-----------------------------------
void Duck::fly()
{
	fb->fly();
}

//-----------------------------------
// Show yourself, duck!
//-----------------------------------
void Duck::display()
{
	cout << "I'm a generic duck.\n";
}


