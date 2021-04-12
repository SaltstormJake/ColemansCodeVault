//===================================================================
// Tea.h
// Implementation class defining a concrete class for a demonstration 
//   of the Template Method Design Pattern
// Author:  Dr. Rick Coleman
//===================================================================
#include "Tea.h"

#include <iostream>

using namespace std;

//--------------------------------------
// Class constructor
//--------------------------------------
Tea::Tea()
{
}

//--------------------------------------
// Class destructor
//--------------------------------------
Tea::~Tea()
{
}

//--------------------------------------
// Handle coffee brewing
//--------------------------------------
void Tea::brew()
{
	cout << "\tSteeping the tea.\n";
}

//--------------------------------------
// Handle adding coffee condiments
//--------------------------------------
void Tea::addCondiments()
{
	cout << "\tAdding sugar and lemon.\n";
}
