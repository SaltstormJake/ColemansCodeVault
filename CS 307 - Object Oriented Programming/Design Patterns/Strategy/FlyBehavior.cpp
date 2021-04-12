//======================================================================================
// FlyBehavior.cpp
// Implementation file defining a parent class for a family of fly algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#include "FlyBehavior.h"
#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
FlyBehavior::FlyBehavior()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
FlyBehavior::~FlyBehavior()
{
}
				
//--------------------------------------
// All concrete implementations fly.
//--------------------------------------
void FlyBehavior::fly()
{
	cout << "All subclasses must implement their own fly behavior.\n";
}
			
