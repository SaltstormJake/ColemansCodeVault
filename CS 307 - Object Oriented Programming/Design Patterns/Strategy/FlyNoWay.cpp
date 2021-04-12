//======================================================================================
// FlyNoWay.cpp
// Implementation file defining a subclass for a family of fly algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#include "FlyNoWay.h"
#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
FlyNoWay::FlyNoWay()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
FlyNoWay::~FlyNoWay()
{
}
				
//--------------------------------------
// All concrete implementations fly.
//--------------------------------------
void FlyNoWay::fly()
{
	cout << "I can't fly.\n";
}