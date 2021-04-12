//=========================================================================
// CoffeePotOnCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "CoffeePotOnCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
CoffeePotOnCommand::CoffeePotOnCommand(CoffeePot *coffeePot)
{
	this->coffeePot = coffeePot;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
CoffeePotOnCommand::~CoffeePotOnCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void CoffeePotOnCommand::execute()
{
	coffeePot->on();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void CoffeePotOnCommand::undo()
{
	coffeePot->off();
}
