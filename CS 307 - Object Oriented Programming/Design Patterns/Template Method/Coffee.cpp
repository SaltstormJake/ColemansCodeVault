//===================================================================
// Coffee.h
// Implementation class defining a concrete class for a demonstration 
//   of the Template Method Design Pattern
// Author:  Dr. Rick Coleman
//===================================================================
#include "Coffee.h"

#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
Coffee::Coffee()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
Coffee::~Coffee()
{
}

//--------------------------------------
// Handle coffee brewing
//--------------------------------------
void Coffee::brew()
{
	cout << "\tDripping coffee through filter.\n";
}

//--------------------------------------
// Handle adding coffee condiments
//--------------------------------------
void Coffee::addCondiments()
{
	cout << "\tAdding sugar and milk.\n";
}
