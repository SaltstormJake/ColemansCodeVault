//==========================================================
// NYVeggiePizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "NYVeggiePizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
NYVeggiePizza::NYVeggiePizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
NYVeggiePizza::~NYVeggiePizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void NYVeggiePizza::prepare()
{
	cout << "\tPreparing the New York veggie pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void NYVeggiePizza::bake()
{
	cout << "\tBaking the New York veggie pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void NYVeggiePizza::cut()
{
	cout << "\tCuting the New York veggie pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void NYVeggiePizza::box()
{
	cout << "\tBoxing the New York veggie pizza." << endl;
}