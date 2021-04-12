//==========================================================
// Pizza.cpp
// Implementation of the parent class that all pizza types  
//	must inherit.
// Author: Dr. Rick Coleman
//==========================================================
#include "Pizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
Pizza::Pizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
Pizza::~Pizza()
{
}

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void Pizza::prepare()
{
	cout << "\tPreparing the pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void Pizza::bake()
{
	cout << "\tBaking the pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void Pizza::cut()
{
	cout << "\tCuting the pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void Pizza::box()
{
	cout << "\tBoxing the pizza." << endl;
}