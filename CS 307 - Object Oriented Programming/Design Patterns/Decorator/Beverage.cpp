//=================================================================================
// Beverage.cpp
// Implementation file defining the parent class for all concrete implementations 
//   of objects to be decorated to demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#include <iostream>
#include "Beverage.h"

using namespace std;

//-----------------------------------------
// Default constructor;
//-----------------------------------------
Beverage::Beverage()
{
	m_Decoratee = NULL;
	m_sDescription = "";
	m_dCost = 0.0;
}

//-----------------------------------------
// Destructor
//-----------------------------------------
Beverage::~Beverage()
{
	if(m_Decoratee != NULL)
		delete m_Decoratee;	
}

//-----------------------------------------
// Get the description of this beverage
//-----------------------------------------
string Beverage::getDescription()
{
	if(m_Decoratee != NULL)
		return m_Decoratee->getDescription() + " " + m_sDescription;
	else
		return m_sDescription;
}

//-----------------------------------------
// Set the description of this Beverage
//-----------------------------------------
void Beverage::setDescription(string desc)
{
	m_sDescription = desc;
}

//-----------------------------------------
// Get the cost of this beverage plus its
//   decorator
//-----------------------------------------
double Beverage::getCost()
{
	if(m_Decoratee != NULL)
		return m_dCost + m_Decoratee->getCost();
	else
		return m_dCost;
}

//-----------------------------------------
// Set the cost for this beverage
//-----------------------------------------
void Beverage::setCost(double cost)
{
	m_dCost = cost;
}

//-----------------------------------------
// Set what this Beverage is decorating
//-----------------------------------------
void Beverage::setDecoratee(Beverage *dec)
{
	m_Decoratee = dec;
}

