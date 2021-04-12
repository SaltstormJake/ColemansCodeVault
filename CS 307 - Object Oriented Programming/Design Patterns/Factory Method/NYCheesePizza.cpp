//==========================================================
// NYCheesePizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "NYCheesePizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
NYCheesePizza::NYCheesePizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
NYCheesePizza::~NYCheesePizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void NYCheesePizza::prepare()
{
	cout << "\tPreparing the New York cheese pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void NYCheesePizza::bake()
{
	cout << "\tBaking the New York cheese pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void NYCheesePizza::cut()
{
	cout << "\tCuting the New York cheese pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void NYCheesePizza::box()
{
	cout << "\tBoxing the New York cheese pizza." << endl;
}