//======================================================================
// CShape.cpp
// Purpose: Implementation file defining a base class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#define _CRT_SECURE_NO_WARNINGS

#include "CShape.h"


//---------------------------------------
// Default constructor
//---------------------------------------
CShape::CShape()
{
	m_eType = SHAPE;
	strcpy(m_sTypeName, "CShape");
}

//---------------------------------------
// Default destructor
//---------------------------------------
CShape::~CShape()
{
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
SHAPE_TYPE CShape::getType()
{
	return m_eType;
}

//---------------------------------------
// Virtual function to return type name
//---------------------------------------
char *CShape::getTypeName()
{
	return m_sTypeName;
}