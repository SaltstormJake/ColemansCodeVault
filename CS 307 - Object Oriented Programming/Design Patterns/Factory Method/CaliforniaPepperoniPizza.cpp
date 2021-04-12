//==========================================================
// CaliforniaPepperoniPizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "CaliforniaPepperoniPizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
CaliforniaPepperoniPizza::CaliforniaPepperoniPizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
CaliforniaPepperoniPizza::~CaliforniaPepperoniPizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void CaliforniaPepperoniPizza::prepare()
{
	cout << "\tPreparing the California pepperoni pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void CaliforniaPepperoniPizza::bake()
{
	cout << "\tBaking the California pepperoni pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void CaliforniaPepperoniPizza::cut()
{
	cout << "\tCuting the California pepperoni pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void CaliforniaPepperoniPizza::box()
{
	cout << "\tBoxing the California pepperoni pizza." << endl;
}