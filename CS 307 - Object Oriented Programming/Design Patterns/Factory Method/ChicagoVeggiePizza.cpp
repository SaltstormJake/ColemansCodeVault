//==========================================================
// ChicagoVeggiePizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "ChicagoVeggiePizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
ChicagoVeggiePizza::ChicagoVeggiePizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
ChicagoVeggiePizza::~ChicagoVeggiePizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void ChicagoVeggiePizza::prepare()
{
	cout << "\tPreparing the Chicago veggie pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void ChicagoVeggiePizza::bake()
{
	cout << "\tBaking the Chicago veggie pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void ChicagoVeggiePizza::cut()
{
	cout << "\tCuting the Chicago veggie pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void ChicagoVeggiePizza::box()
{
	cout << "\tBoxing the Chicago veggie pizza." << endl;
}