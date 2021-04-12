//======================================================================================
// QuackBehavior.cpp
// Implementation file defining a parent class for a family of quack algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#include "QuackBehavior.h"
#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
QuackBehavior::QuackBehavior()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
QuackBehavior::~QuackBehavior()
{
}
				
//--------------------------------------
// All concrete implementations quack.
//--------------------------------------
void QuackBehavior::quack()
{
	cout << "All subclasses must implement their own quack behavior.\n";
}
