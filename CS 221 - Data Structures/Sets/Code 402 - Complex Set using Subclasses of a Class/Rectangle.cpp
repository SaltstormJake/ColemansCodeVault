//===================================================================
// File: Rectangle.cpp
// Purpose: Implementation of a rectangle object
// Author: Dr. Rick Coleman
//===================================================================
#include "Rectangle.h"
#include <iostream>
using namespace std;

//--------------------------------
// Default class constructor
//--------------------------------
Rectangle::Rectangle()
{
	ULCorner.X = ULCorner.Y = 0.0;
	width = height = 0.0;
	this->type = RECTANGLE;
	this->description = dupString("RECTANGLE");
}

//--------------------------------
// Class constructor
//--------------------------------
Rectangle::Rectangle(double ulX, double ulY,
			      double width, double height)
{
	ULCorner.X = ulX;
	ULCorner.Y = ulY;
	this->width = width;
	this->height = height;
	this->type = RECTANGLE;
	this->description = dupString("RECTANGLE");
}

//--------------------------------
// Get the upper left X coordinate
//--------------------------------
double Rectangle::getPointX()
{
	return ULCorner.X;
}

//--------------------------------
// Set the upper left X coordinate
//--------------------------------
void Rectangle::setPointX(double x)
{
	ULCorner.X = x;
}

//--------------------------------
// Get the upper left Y coordinate
//--------------------------------
double Rectangle::getPointY()
{
	return ULCorner.Y;
}

//--------------------------------
// Set the upper left Y coordinate
//--------------------------------
void Rectangle::setPointY(double y)
{
	ULCorner.Y = y;
}

//--------------------------------
// Get the width
//--------------------------------
double Rectangle::getWidth()
{
	return width;
}

//--------------------------------
// Set the width
//--------------------------------
void Rectangle::setWidth(double wd)
{
	width = wd;
}

//--------------------------------
// Get the height
//--------------------------------
double Rectangle::getHeight()
{
	return height;
}

//--------------------------------
// Set the height
//--------------------------------
void Rectangle::setHeight(double ht)
{
	height = ht;
}

//-----------------------------------------------
// Set the key. 
//-----------------------------------------------
void Rectangle::setKey()
{
	static int keybase = 1;
	key = keybase;
	keybase++;
}

//-----------------------------------------------
// Copy this object
//-----------------------------------------------
SetObject *Rectangle::copy()
{
	Rectangle *rect = new Rectangle(this->ULCorner.X, this->ULCorner.Y, 
		                            this->width, this->height);
	return (SetObject *)rect;
}

//-----------------------------------------------
// Print data in this rectangle
//-----------------------------------------------
void Rectangle::printData()
{
	cout << "RECTANGLE" << "\tUL Corner=" <<  ULCorner.X << ", " << ULCorner.Y << 
		"\tWidth=" << width << "  Height=" << height << "\n";
}