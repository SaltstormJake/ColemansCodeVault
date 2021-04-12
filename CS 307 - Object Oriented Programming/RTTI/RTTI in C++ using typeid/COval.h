//======================================================================
// COval.h
// Purpose: Interface file defining a derived class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#ifndef COVAL_H
#define COVAL_H

#include "CShape.h"

class COval : public CShape
{
	public:
		COval();
		~COval();
		SHAPE_TYPE getType();
		char *getTypeName();
};

#endif