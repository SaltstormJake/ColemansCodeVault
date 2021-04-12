//======================================================================
// CLine.cpp
// Purpose: Implementation file defining a derived class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#define _CRT_SECURE_NO_WARNINGS

#include "CLine.h"

//---------------------------------------
// Default constructor
//---------------------------------------
CLine::CLine()
{
	m_eType = LINE;
	strcpy(m_sTypeName, "CLine");
}

//---------------------------------------
// Default destructor
//---------------------------------------
CLine::~CLine()
{
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
SHAPE_TYPE CLine::getType()
{
	return m_eType;
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
char *CLine::getTypeName()
{
	return m_sTypeName;
}