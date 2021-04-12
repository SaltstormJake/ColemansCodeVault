//===================================================================
// File: SetObject.cpp
// Purpose: Implementation file for the parent class for objects that 
//           can be included in the set..
// Author: Dr. Rick Coleman
//===================================================================
#include "SetObject.h"
#include <string.h>

//-----------------------------------------------
// Default class constructor
//-----------------------------------------------
SetObject::SetObject()
{
	type = -1;		// No type
	description = NULL;	// No description
	next = NULL;

}

//-----------------------------------------------
// Class destructor
//-----------------------------------------------
SetObject::~SetObject()
{
	// Delete description string
	delete description;
}

//-----------------------------------------------
// Get the object type code
//-----------------------------------------------
int SetObject::getType()
{
	return type;
}

//-----------------------------------------------
// Set the object type code
//-----------------------------------------------
void SetObject::setType(int type)
{
	this->type = type;
}

//-----------------------------------------------
// Set the object description
//-----------------------------------------------
void SetObject::setDesc(char *desc)
{
	this->description = dupString(desc);
}

//-----------------------------------------------
// Duplicate a character array using dynamic
// memory allocation.
//-----------------------------------------------
char *SetObject::dupString(char *str)
{
	char *dup = new char[strlen(str) + 1];
	strcpy(dup, str);
	return dup;
}

//-----------------------------------------------
// Get the key
//-----------------------------------------------
int SetObject::getKey()
{
	return key;
}

//-----------------------------------------------
// Superclass function does nothing.  Subclasses
//  override to copy themselves.
//-----------------------------------------------
SetObject *SetObject::copy()
{
	return NULL;
}

//-----------------------------------------------
// Superclass function does nothing.  Subclasses
//  override to print themselves.
//-----------------------------------------------
void SetObject::printData()
{
	return;
}