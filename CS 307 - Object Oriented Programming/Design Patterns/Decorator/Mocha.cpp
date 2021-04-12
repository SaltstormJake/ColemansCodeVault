//=======================================================================================
// Mocha.cpp
// Implementation file defining a concrete implementations of a decorator to demonstrate 
//   the Decorator Design Pattern.  This class is a sub-class of Beverage so that 
//   a decorator can be passed in place of the object it wraps.
// Author: Dr. Rick Coleman
//=======================================================================================
#include "Mocha.h"
#include <iostream>

using namespace std;

//-----------------------------------------
// Default constructor;
//-----------------------------------------
Mocha::Mocha()
{
	m_Decoratee = NULL;
	m_sDescription = "Mocha";
	m_dCost = 0.30;
}

//-----------------------------------------
// Destructor
//-----------------------------------------
Mocha::~Mocha()
{
}