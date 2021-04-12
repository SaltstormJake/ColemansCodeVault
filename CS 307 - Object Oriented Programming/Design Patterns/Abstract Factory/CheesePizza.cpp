//==========================================================
// CheesePizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "CheesePizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
CheesePizza::CheesePizza(PizzaIngredientFactory *pif)
{
	pizzaIngredientFactory = pif;
}

//----------------------------------------
// Class destructor
//----------------------------------------
CheesePizza::~CheesePizza()
{
}

// Implement all required functions from PizzaInterface
//---------------------------------------
// Set the name (type) of this pizza.
//---------------------------------------
void CheesePizza::setName(string n)
{
	name = n;
}

//---------------------------------------
// Get the pizza name. 
//---------------------------------------
string *CheesePizza::getName()
{
	string *fullName = new string();
	*fullName = name + " with ";
	if(dough != NULL)
		fullName->append(dough->getName());
	if(sauce != NULL)
	{
		fullName->append(" and\n\t");
		fullName->append(sauce->getName());
	}
	if(cheese != NULL)
	{
		fullName->append(" topped with ");
		fullName->append(cheese->getName());
	}
	return fullName;
}

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void CheesePizza::prepare()
{
	cout << "\tPreparing the cheese pizza.\n";
	dough = pizzaIngredientFactory->createDough();
	sauce = pizzaIngredientFactory->createSauce();
	cheese = pizzaIngredientFactory->createCheese();
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void CheesePizza::bake()
{
	cout << "\tBake at 400 for 25 minutes." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void CheesePizza::cut()
{
	cout << "\tCuting the pizza into diagonal slices." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void CheesePizza::box()
{
	cout << "\tPlacing pizza in official pizza store box." << endl;
}