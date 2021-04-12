//======================================================================
// CLine.h
// Purpose: Interface file defining a derived class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#ifndef CLINE_H
#define CLINE_H

#include "CShape.h"

class CLine : public CShape
{
	public:
		CLine();
		~CLine();
		SHAPE_TYPE getType();
		char *getTypeName();
};

#endif