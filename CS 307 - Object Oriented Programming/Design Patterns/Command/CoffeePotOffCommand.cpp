//=========================================================================
// CoffeePotOffCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "CoffeePotOffCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
CoffeePotOffCommand::CoffeePotOffCommand(CoffeePot *coffeePot)
{
	this->coffeePot = coffeePot;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
CoffeePotOffCommand::~CoffeePotOffCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void CoffeePotOffCommand::execute()
{
	coffeePot->off();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void CoffeePotOffCommand::undo()
{
	coffeePot->on();
}
