//======================================================================================
// MuteDuck.cpp
// Implementation file defining a subclass for a family of quack algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#include "MuteDuck.h"
#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
MuteDuck::MuteDuck()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
MuteDuck::~MuteDuck()
{
}
				
//--------------------------------------
// All concrete implementations quack.
//--------------------------------------
void MuteDuck::quack()
{
	cout << "Shhhh! I can't quack.\n";
}