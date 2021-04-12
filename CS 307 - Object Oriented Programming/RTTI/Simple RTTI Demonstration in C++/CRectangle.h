//======================================================================
// CRectangle.h
// Purpose: Interface file defining a derived class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include "CShape.h"

class CRectangle : public CShape
{
	public:
		CRectangle();
		~CRectangle();
		SHAPE_TYPE getType();
		char *getTypeName();
};

#endif
