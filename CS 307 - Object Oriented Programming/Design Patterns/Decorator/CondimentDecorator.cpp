//====================================================================================
// CondimentDecorator.cpp
// Implementation file defining the parent class for all concrete implementations
//   of a decorator to demonstrate the Decorator Design Pattern.  This class is a sub-
//   class of Beverage so that a decorator can be passed in place of the object it
//   wraps.
// Author: Dr. Rick Coleman
//====================================================================================

#include "CondimentDecorator.h"

//-----------------------------------------
// Default constructor;
//-----------------------------------------
CondimentDecorator::CondimentDecorator()
{
	m_Decoratee = NULL;
	m_sDescription = "";
	m_dCost = 0.0;
}

//-----------------------------------------
// Destructor
//-----------------------------------------
CondimentDecorator::~CondimentDecorator()
{
}
