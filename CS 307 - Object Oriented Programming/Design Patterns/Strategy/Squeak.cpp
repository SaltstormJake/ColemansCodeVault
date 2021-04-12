//======================================================================================
// Squeak.cpp
// Implementation file defining a subclass for a family of quack algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#include "Squeak.h"
#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
Squeak::Squeak()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
Squeak::~Squeak()
{
}
				
//--------------------------------------
// All concrete implementations quack.
//--------------------------------------
void Squeak::quack()
{
	cout << "Squeeeeeeeeak!\n";
}
