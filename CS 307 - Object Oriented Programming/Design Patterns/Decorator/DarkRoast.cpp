//=====================================================================================
// DarkRoast.cpp
// Implementation file defining a concrete implementation of an object to be decorated 
//  to demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=====================================================================================
#include <iostream>
#include "DarkRoast.h"

using namespace std;

//-----------------------------------------
// Default constructor;
//-----------------------------------------
DarkRoast::DarkRoast()
{
	m_Decoratee = NULL;
	m_sDescription = "Dark Roast";
	m_dCost = 1.50;
}

//-----------------------------------------
// Destructor
//-----------------------------------------
DarkRoast::~DarkRoast()
{
}