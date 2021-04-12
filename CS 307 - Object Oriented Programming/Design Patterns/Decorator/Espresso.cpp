//=====================================================================================
// Espresso.cpp
// Implementation file defining a concrete implementation of an object to be decorated 
//  to demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=====================================================================================
#include <iostream>
#include "Espresso.h"

using namespace std;

//-----------------------------------------
// Default constructor;
//-----------------------------------------
Espresso::Espresso()
{
	m_Decoratee = NULL;
	m_sDescription = "Espresso";
	m_dCost = 1.75;
}

//-----------------------------------------
// Destructor
//-----------------------------------------
Espresso::~Espresso()
{
}