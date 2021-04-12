//==========================================================
// ChicagoPepperoniPizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "ChicagoPepperoniPizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
ChicagoPepperoniPizza::ChicagoPepperoniPizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
ChicagoPepperoniPizza::~ChicagoPepperoniPizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void ChicagoPepperoniPizza::prepare()
{
	cout << "\tPreparing the Chicago pepperoni pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void ChicagoPepperoniPizza::bake()
{
	cout << "\tBaking the Chicago pepperoni pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void ChicagoPepperoniPizza::cut()
{
	cout << "\tCuting the Chicago pepperoni pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void ChicagoPepperoniPizza::box()
{
	cout << "\tBoxing the Chicago pepperoni pizza." << endl;
}