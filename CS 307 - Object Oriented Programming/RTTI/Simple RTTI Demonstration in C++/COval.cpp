//======================================================================
// COval.cpp
// Purpose: Implementation file defining a derived class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#define _CRT_SECURE_NO_WARNINGS

#include "COval.h"

//---------------------------------------
// Default constructor
//---------------------------------------
COval::COval()
{
	m_eType = OVAL;
	strcpy(m_sTypeName, "COval");
}

//---------------------------------------
// Default destructor
//---------------------------------------
COval::~COval()
{
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
SHAPE_TYPE COval::getType()
{
	return m_eType;
}

//---------------------------------------
// Virtual function to return type
//---------------------------------------
char *COval::getTypeName()
{
	return m_sTypeName;
}