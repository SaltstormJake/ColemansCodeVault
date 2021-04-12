//===================================================================
// File: Rectangle.h
// Purpose: Definition of a rectangle object
// Author: Dr. Rick Coleman
//===================================================================
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "SetObject.h"
#include "Sets2.h"

class Rectangle:SetObject
{
	private:
		SetPoint2D	ULCorner;
		double		width;
		double		height;

	public:
		Rectangle();			  // Class constructors
		Rectangle(double ulX, double ulY,
			      double width, double height);
		~Rectangle();			  // Class destructor
		double getPointX();       // Return point pt X coordinate
		void setPointX(double x); // Set point pt X coordinate
		double getPointY();       // Return point pt Y coordinate
		void setPointY(double y); // Set point pt Y coordinate
		double getWidth();		  // Return width of this rectangle
		void setWidth(double wd); // Set width
		double getHeight();		  // Return height of this rectangle
		void setHeight(double ht);// Set height
		SetObject *copy();		   // Copy this sub class object
		void printData();		// Print data in this object

	protected:
		void setKey();					  // Set the key for this object
};

#endif