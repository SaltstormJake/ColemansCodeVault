//=========================================================================
// HottubOnCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "HottubOnCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
HottubOnCommand::HottubOnCommand(Hottub *hottub)
{
	this->hottub = hottub;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
HottubOnCommand::~HottubOnCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void HottubOnCommand::execute()
{
	hottub->on();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void HottubOnCommand::undo()
{
	hottub->off();
}
