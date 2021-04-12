//==========================================================
// ChicagoCheesePizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "ChicagoCheesePizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
ChicagoCheesePizza::ChicagoCheesePizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
ChicagoCheesePizza::~ChicagoCheesePizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void ChicagoCheesePizza::prepare()
{
	cout << "\tPreparing the Chicago cheese pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void ChicagoCheesePizza::bake()
{
	cout << "\tBaking the Chicago cheese pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void ChicagoCheesePizza::cut()
{
	cout << "\tCuting the Chicago cheese pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void ChicagoCheesePizza::box()
{
	cout << "\tBoxing the Chicago cheese pizza." << endl;
}