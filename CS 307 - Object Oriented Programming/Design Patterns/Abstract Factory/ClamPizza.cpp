//==========================================================
// ClamPizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "ClamPizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
ClamPizza::ClamPizza(PizzaIngredientFactory *pif)
{
	pizzaIngredientFactory = pif;
}

//----------------------------------------
// Class destructor
//----------------------------------------
ClamPizza::~ClamPizza()
{
}

// Implement all required functions from PizzaInterface
//---------------------------------------
// Set the name (type) of this pizza.
//---------------------------------------
void ClamPizza::setName(string n)
{
	name = n;
}
//---------------------------------------
// Get the pizza name. 
//---------------------------------------
string *ClamPizza::getName()
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
	if(clams != NULL)
	{
		fullName->append(" and ");
		fullName->append(clams->getName());
	}
	return fullName;
}

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void ClamPizza::prepare()
{
	cout << "\tPreparing the clam pizza.\n";
	dough = pizzaIngredientFactory->createDough();
	sauce = pizzaIngredientFactory->createSauce();
	cheese = pizzaIngredientFactory->createCheese();
	clams = pizzaIngredientFactory->createClams();
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void ClamPizza::bake()
{
	cout << "\tBake at 400 for 25 minutes." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void ClamPizza::cut()
{
	cout << "\tCuting the pizza into diagonal slices." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void ClamPizza::box()
{
	cout << "\tPlacing pizza in official pizza store box." << endl;
}