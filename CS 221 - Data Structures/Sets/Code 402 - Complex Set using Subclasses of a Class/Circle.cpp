//===================================================================
// File: Circle.cpp
// Purpose: Implementation of a circle object
// Author: Dr. Rick Coleman
//===================================================================
#include "Circle.h"
#include <iostream>
using namespace std;

//--------------------------------
// Default class constructor
//--------------------------------
Circle::Circle()
{
	center.X = center.Y = 0.0;
	radius = 0.0;
	this->type = CIRCLE;
	this->description = dupString("CIRCLE");
}

//--------------------------------
// Class constructor
//--------------------------------
Circle::Circle(double CX, double CY, double radius)
{
	center.X = CX;
	center.Y = CY;
	this->radius = radius;
	this->type = CIRCLE;
	this->description = dupString("CIRCLE");
}

//--------------------------------
// Get the center X coordinate
//--------------------------------
double Circle::getCenterX()
{
	return center.X;
}

//--------------------------------
// Set the center X coordinate
//--------------------------------
void Circle::setCenterX(double x)
{
	center.X = x;
}

//--------------------------------
// Get the center Y coordinate
//--------------------------------
double Circle::getCenterY()
{
	return center.Y;
}

//--------------------------------
// Set the center Y coordinate
//--------------------------------
void Circle::setCenterY(double y)
{
	center.Y = y;
}

//--------------------------------
// Get the radius
//--------------------------------
double Circle::getRadius()
{
	return radius;
}

//--------------------------------
// Set the radius
//--------------------------------
void Circle::setRadius(double r)
{
	radius = r;
}

//-----------------------------------------------
// Set the key. 
//-----------------------------------------------
void Circle::setKey()
{
	static int keybase = 1;
	key = keybase;
	keybase++;
}

//-----------------------------------------------
// Copy this object
//-----------------------------------------------
SetObject *Circle::copy()
{
	Circle *cir = new Circle(this->center.X, this->center.Y, this->radius);
	return (SetObject *)cir;
}

//-----------------------------------------------
// Print data in this circle
//-----------------------------------------------
void Circle::printData()
{
	cout << "CIRCLE" << "\tcenter=" <<  center.X << ", " << center.Y << "\tradius=" 
		<< radius <<"\n";
}