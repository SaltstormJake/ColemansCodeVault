//=====================================================================================
// Decaf.cpp
// Implementation file defining a concrete implementation of an object to be decorated 
//  to demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=====================================================================================
#include <iostream>
#include "Decaf.h"

using namespace std;

//-----------------------------------------
// Default constructor;
//-----------------------------------------
Decaf::Decaf()
{
	m_Decoratee = NULL;
	m_sDescription = "Decaf";
	m_dCost = 1.25;
}

//-----------------------------------------
// Destructor
//-----------------------------------------
Decaf::~Decaf()
{
}