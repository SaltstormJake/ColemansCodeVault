//==========================================================
// CaliforniaClamPizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "CaliforniaClamPizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
CaliforniaClamPizza::CaliforniaClamPizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
CaliforniaClamPizza::~CaliforniaClamPizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void CaliforniaClamPizza::prepare()
{
	cout << "\tPreparing the California clam pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void CaliforniaClamPizza::bake()
{
	cout << "\tBaking the California clam pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void CaliforniaClamPizza::cut()
{
	cout << "\tCuting the California clam pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void CaliforniaClamPizza::box()
{
	cout << "\tBoxing the California clam pizza." << endl;
}