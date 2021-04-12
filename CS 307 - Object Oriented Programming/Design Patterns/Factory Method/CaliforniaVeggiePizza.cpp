//==========================================================
// CaliforniaVeggiePizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "CaliforniaVeggiePizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
CaliforniaVeggiePizza::CaliforniaVeggiePizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
CaliforniaVeggiePizza::~CaliforniaVeggiePizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void CaliforniaVeggiePizza::prepare()
{
	cout << "\tPreparing the California veggie pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void CaliforniaVeggiePizza::bake()
{
	cout << "\tBaking the California veggie pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void CaliforniaVeggiePizza::cut()
{
	cout << "\tCuting the California veggie pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void CaliforniaVeggiePizza::box()
{
	cout << "\tBoxing the California veggie pizza." << endl;
}