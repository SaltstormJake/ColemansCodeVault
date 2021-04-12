//==========================================================
// CaliforniaCheesePizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "CaliforniaCheesePizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
CaliforniaCheesePizza::CaliforniaCheesePizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
CaliforniaCheesePizza::~CaliforniaCheesePizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void CaliforniaCheesePizza::prepare()
{
	cout << "\tPreparing the California cheese pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void CaliforniaCheesePizza::bake()
{
	cout << "\tBaking the California cheese pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void CaliforniaCheesePizza::cut()
{
	cout << "\tCuting the California cheese pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void CaliforniaCheesePizza::box()
{
	cout << "\tBoxing the California cheese pizza." << endl;
}