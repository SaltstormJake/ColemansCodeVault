//=============================================================
// SingletonDemo.cpp
// Implementation file for the Singleton Design Pattern demo.
// Author: Dr. Rick Coleman
//=============================================================
#include "SingletonDemo.h"

//----------------------------------------------------
// Private Class Constructor
//----------------------------------------------------
SingletonDemo::SingletonDemo()
{	}

//----------------------------------------------------
// Public Class Destructor
//----------------------------------------------------
SingletonDemo::~SingletonDemo()
{	}

//----------------------------------------------------
// Get the count number of this instance.  This
// function just demonstrates that we always create
// one and only one instance of this class.
//----------------------------------------------------
int SingletonDemo::getInstanceNumber()
{
	return this->instanceNumber;
}

//----------------------------------------------------
// Static function which returns a pointer to the
//  singleton instance of this class.
// Static variables are not destroyed when a function
//  exits.
//----------------------------------------------------
SingletonDemo *SingletonDemo::getInstance()
{
	static SingletonDemo *theInstance = NULL;
	static int counter = 1; 
	if(theInstance == NULL)
	{
		theInstance = new SingletonDemo();
		theInstance->instanceNumber = counter;
		counter++; // If this ever creates another instance
		           // the counter will show the error.
	}
	return theInstance;
}
