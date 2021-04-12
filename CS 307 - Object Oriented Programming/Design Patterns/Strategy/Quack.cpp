//======================================================================================
// Quack.cpp
// Implementation file defining a subclass for a family of quack algorithms for 
//	the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#include "Quack.h"
#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
Quack::Quack()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
Quack::~Quack()
{
}
				
//--------------------------------------
// All concrete implementations quack.
//--------------------------------------
void Quack::quack()
{
	cout << "Quack, quack, quack!\n";
}
