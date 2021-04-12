//======================================================================
// CPolygon.cpp
// Purpose: Implementation file defining a derived class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#define _CRT_SECURE_NO_WARNINGS

#include "CPolygon.h"

//---------------------------------------
// Default constructor
//---------------------------------------
CPolygon::CPolygon()
{
	m_eType = POLYGON;
	strcpy(m_sTypeName, "CPolygon");
}

//---------------------------------------
// Default destructor
//---------------------------------------
CPolygon::~CPolygon()
{
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
SHAPE_TYPE CPolygon::getType()
{
	return m_eType;
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
char *CPolygon::getTypeName()
{
	return m_sTypeName;
}