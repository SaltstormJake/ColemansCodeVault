//=====================================================================================
// HouseBlend.cpp
// Implementation file defining a concrete implementation of an object to be decorated 
//  to demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=====================================================================================
#include <iostream>
#include "HouseBlend.h"

using namespace std;

//-----------------------------------------
// Default constructor;
//-----------------------------------------
HouseBlend::HouseBlend()
{
	m_Decoratee = NULL;
	m_sDescription = "House Blend";
	m_dCost = 1.50;
}

//-----------------------------------------
// Destructor
//-----------------------------------------
HouseBlend::~HouseBlend()
{
}
