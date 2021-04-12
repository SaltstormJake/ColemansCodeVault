//=======================================================================================
// Whip.cpp
// Implementation file defining a concrete implementations of a decorator to demonstrate 
//   the Decorator Design Pattern.  This class is a sub-class of Beverage so that 
//   a decorator can be passed in place of the object it wraps.
// Author: Dr. Rick Coleman
//=======================================================================================
#include "Whip.h"
#include <iostream>

using namespace std;

//-----------------------------------------
// Default constructor;
//-----------------------------------------
Whip::Whip()
{
	m_Decoratee = NULL;
	m_sDescription = "Whip";
	m_dCost = 0.20;
}

//-----------------------------------------
// Destructor
//-----------------------------------------
Whip::~Whip()
{
}
