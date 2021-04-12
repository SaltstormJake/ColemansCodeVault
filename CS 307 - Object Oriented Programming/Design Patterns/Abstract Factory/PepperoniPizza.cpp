//==========================================================
// PepperoniPizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "PepperoniPizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *pif)
{
	pizzaIngredientFactory = pif;
}

//----------------------------------------
// Class destructor
//----------------------------------------
PepperoniPizza::~PepperoniPizza()
{
}

// Implement all required functions from PizzaInterface
//---------------------------------------
// Set the name (type) of this pizza.
//---------------------------------------
void PepperoniPizza::setName(string n)
{
	name = n;
}
//---------------------------------------
// Get the pizza name. 
//---------------------------------------
string *PepperoniPizza::getName()
{
	string *fullName = new string();;
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
	if(pepperoni != NULL)
	{
		fullName->append(" and\n\t");
		fullName->append(pepperoni->getName());
	}
	return fullName;
}

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void PepperoniPizza::prepare()
{
	cout << "\tPreparing the pepperoni pizza.\n";
	dough = pizzaIngredientFactory->createDough();
	sauce = pizzaIngredientFactory->createSauce();
	cheese = pizzaIngredientFactory->createCheese();
	pepperoni = pizzaIngredientFactory->createPepperoni();
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void PepperoniPizza::bake()
{
	cout << "\tBake at 400 for 25 minutes." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void PepperoniPizza::cut()
{
	cout << "\tCuting the pizza into diagonal slices." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void PepperoniPizza::box()
{
	cout << "\tPlacing pizza in official pizza store box." << endl;
}