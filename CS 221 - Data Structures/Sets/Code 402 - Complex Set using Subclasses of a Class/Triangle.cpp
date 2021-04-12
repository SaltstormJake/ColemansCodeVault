//===================================================================
// File: Triangle.cpp
// Purpose: Implementation of a triangle object
// Author: Dr. Rick Coleman
//===================================================================
#include "Triangle.h"
#include <iostream>
using namespace std;

//--------------------------------
// Default class constructor
//--------------------------------
Triangle::Triangle()
{
	pt1.X = pt2.X = pt3.X = 0.0;
	pt1.Y = pt2.Y = pt3.Y = 0.0;
	this->type = TRIANGLE;
	this->description = dupString("TRIANGLE");
}

//--------------------------------
// Class constructor
//--------------------------------
Triangle::Triangle(double x1, double y1,
			     double x2, double y2,
				 double x3, double y3)
{
	pt1.X = x1;
	pt2.X = x2;
	pt3.X = x3;
	pt1.Y = y1;
	pt2.Y = y2;
	pt3.Y = y3;
	this->type = TRIANGLE;
	this->description = dupString("TRIANGLE");
}

//--------------------------------
// Class destructor
//--------------------------------
Triangle::~Triangle()
{
	// Nothing to do.  Auto call to super destructor
	//  will delete the description string.
}

//--------------------------------
// Get the X coordinate of a point
//--------------------------------
double Triangle::getPointX(int pt)
{
	switch(pt)
	{
		case 1 : return pt1.X; break;
		case 2 : return pt2.X; break;
		case 3 : return pt3.X; break;
	}
	return 0.0;
}

//--------------------------------
// Set the X coordinate of a point
//--------------------------------
void Triangle::setPointX(int pt, double x)
{
	switch(pt)
	{
		case 1 : pt1.X = x; break;
		case 2 : pt2.X = x; break;
		case 3 : pt3.X = x; break;
	}
}

//--------------------------------
// Get the Y coordinate of a point
//--------------------------------
double Triangle::getPointY(int pt)
{
	switch(pt)
	{
		case 1 : return pt1.Y; break;
		case 2 : return pt2.Y; break;
		case 3 : return pt3.Y; break;
	}
	return 0.0;
}

//--------------------------------
// Set the Y coordinate of a point
//--------------------------------
void Triangle::setPointY(int pt, double y)
{
	switch(pt)
	{
		case 1 : pt1.Y = y; break;
		case 2 : pt2.Y = y; break;
		case 3 : pt3.Y = y; break;
	}
}

//-----------------------------------------------
// Set the key. 
//-----------------------------------------------
void Triangle::setKey()
{
	static int keybase = 1;
	key = keybase;
	keybase++;
}

//-----------------------------------------------
// Copy this object
//-----------------------------------------------
SetObject *Triangle::copy()
{
	Triangle *tri = new Triangle(this->pt1.X, this->pt1.Y, 
		                         this->pt2.X, this->pt2.Y,
								 this->pt3.X, this->pt3.Y);
	return (SetObject *)tri;
}

//-----------------------------------------------
// Print data in this circle
//-----------------------------------------------
void Triangle::printData()
{
	cout << "TRIANGLE" << "\tP1=" << pt1.X << ", " << pt1.Y << 
				  "\t" << "\tP2=" <<  pt2.X << ", " << pt2.Y << 
				  "\t" << "\tP3=" <<  pt3.X << ", " << pt3.Y << "\n";
}