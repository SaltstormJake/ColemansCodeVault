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
		
// The next two functions are part of the Duck class in the Strategy Design Pattern
//   demonstration.  They are commented out in this demonstration of the Adapter just
//   to keep the code simpler and more compact.  These functions are ignored by the
//   TurkeyAdapter which substutites calls to quack and fly with calls to the Turkey
//   gobble and fly functions.

//-----------------------------------
// Set the fly behaivor
//-----------------------------------
//void Duck::SetFlyBehavior(FlyBehavior *fbeh)
//{
//	fb = fbeh;
//}

//-----------------------------------
// Set the quack behavior
//-----------------------------------
//void Duck::SetQuackBehavior(QuackBehavior *qbeh)
//{
//	qb = qbeh;
//}

//-----------------------------------
// All ducks quack, or do they?
//-----------------------------------
void Duck::quack()
{
//	qb->quack();	See comment above for why this is commented out.
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
//	fb->fly();	See comment above for why this is commented out.
}

//-----------------------------------
// Show yourself, duck!
//-----------------------------------
void Duck::display()
{
	cout << "I'm a generic duck.\n";
}


