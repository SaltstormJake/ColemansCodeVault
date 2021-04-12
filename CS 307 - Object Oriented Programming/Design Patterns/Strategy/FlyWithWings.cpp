//======================================================================================
// FlyWithWings.cpp
// Implementation file defining a subclass for a family of fly algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#include "FlyWithWings.h"
#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
FlyWithWings::FlyWithWings()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
FlyWithWings::~FlyWithWings()
{
}
				
//--------------------------------------
// All concrete implementations fly.
//--------------------------------------
void FlyWithWings::fly()
{
	cout << "I can fly because I have wings.\n";
}