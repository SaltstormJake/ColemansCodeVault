//==========================================================
// NYPepperoniPizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "NYPepperoniPizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
NYPepperoniPizza::NYPepperoniPizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
NYPepperoniPizza::~NYPepperoniPizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void NYPepperoniPizza::prepare()
{
	cout << "\tPreparing the New York pepperoni pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void NYPepperoniPizza::bake()
{
	cout << "\tBaking the New York pepperoni pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void NYPepperoniPizza::cut()
{
	cout << "\tCuting the New York pepperoni pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void NYPepperoniPizza::box()
{
	cout << "\tBoxing the New York pepperoni pizza." << endl;
}