//======================================================================
// CPolygon.h
// Purpose: Interface file defining a derived class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#ifndef CPOLYGON_H
#define CPOLYGON_H

#include "CShape.h"

class CPolygon : public CShape
{
	public:
		CPolygon();
		~CPolygon();
		SHAPE_TYPE getType();
		char *getTypeName();
};

#endif