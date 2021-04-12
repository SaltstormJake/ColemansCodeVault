//===================================================================
// File: Circle.h
// Purpose: Definition of a circle object
// Author: Dr. Rick Coleman
//===================================================================
#ifndef CIRCLE_H
#define CIRCLE_H

#include "SetObject.h"
#include "Sets2.h"

class Circle:SetObject
{
	private:
		SetPoint2D	center;
		double		radius;

	public:
		Circle();			       // Class constructors
		Circle(double CX, double CY,
			   double radius);
		~Circle();			       // Class destructor
		double getCenterX();       // Return point pt X coordinate
		void setCenterX(double x); // Set point pt X coordinate
		double getCenterY();       // Return point pt Y coordinate
		void setCenterY(double y); // Set point pt Y coordinate
		double getRadius();		   // Return width of this rectangle
		void setRadius(double r);  // Set width
		SetObject *copy();		   // Copy this sub class object
		void printData();		// Print data in this object

	protected:
		void setKey();					  // Set the key for this object
};

#endif