//==========================================================
// NYClamPizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "NYClamPizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
NYClamPizza::NYClamPizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
NYClamPizza::~NYClamPizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void NYClamPizza::prepare()
{
	cout << "\tPreparing the New York clam pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void NYClamPizza::bake()
{
	cout << "\tBaking the New York clam pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void NYClamPizza::cut()
{
	cout << "\tCuting the New York clam pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void NYClamPizza::box()
{
	cout << "\tBoxing the New York clam pizza." << endl;
}