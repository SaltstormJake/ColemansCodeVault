//======================================================================
// CShape.h
// Purpose: Interface file defining a base class for this RTTI 
//				demonstration.
// Author: Dr. Rick Coleman
//======================================================================
#ifndef CSHAPE_H
#define CSHAPE_H

#include <string.h>

enum SHAPE_TYPE {SHAPE, RECTANGLE, OVAL, LINE, POLYGON};

class CShape
{
	protected:
		SHAPE_TYPE m_eType;
		char m_sTypeName[32];

	public:
		CShape();
		~CShape();
		virtual SHAPE_TYPE getType();
		virtual char *getTypeName();
};
#endif