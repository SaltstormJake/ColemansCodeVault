//======================================================================
// CRectangle.cpp
// Purpose: Implementation file defining a derived class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#define _CRT_SECURE_NO_WARNINGS

#include "CRectangle.h"

//---------------------------------------
// Default constructor
//---------------------------------------
CRectangle::CRectangle()
{
	m_eType = RECTANGLE;
	strcpy(m_sTypeName, "CRectangle");
}

//---------------------------------------
// Default destructor
//---------------------------------------
CRectangle::~CRectangle()
{
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
SHAPE_TYPE CRectangle::getType()
{
	return m_eType;
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
char *CRectangle::getTypeName()
{
	return m_sTypeName;
}