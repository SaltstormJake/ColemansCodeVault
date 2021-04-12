//===================================================================
// File: Triangle.h
// Purpose: Definition of a triangle object
// Author: Dr. Rick Coleman
//===================================================================
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "SetObject.h"
#include "Sets2.h"

class Triangle:SetObject
{
	private:
		SetPoint2D	pt1, pt2, pt3;

	public:
		Triangle();			              // Class constructors
		Triangle(double x1, double y1,
			     double x2, double y2,
				 double x3, double y3);
		~Triangle();			          // Class destructor
		double getPointX(int pt);         // Return point pt X coordinate
		void setPointX(int pt, double x); // Set point pt X coordinate
		double getPointY(int pt);         // Return point pt Y coordinate
		void setPointY(int pt, double y); // Set point pt Y coordinate
		SetObject *copy();		   // Copy this sub class object
		void printData();		// Print data in this object

	protected:
		void setKey();					  // Set the key for this object
};

#endif