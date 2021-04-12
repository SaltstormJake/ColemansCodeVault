//=================================================================================
// Observer.cpp
// Implementation file defining the parent class for all concrete implementations 
//   of an observer to demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#include "Observer.h"
#include <iostream>
using namespace std;

//-----------------------------------------
// Default constructor
//-----------------------------------------
Observer::Observer()
{
}

//-----------------------------------------
// Destructor
//-----------------------------------------
Observer::~Observer()
{
}

//-----------------------------------------
// Update the data being observed
//-----------------------------------------
void Observer::update(Subject *s)
{
	cout << "All subclasses of Observer must implement update()\n.";
}

