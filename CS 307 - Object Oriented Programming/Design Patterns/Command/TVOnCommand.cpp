//=========================================================================
// TVOnCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "TVOnCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
TVOnCommand::TVOnCommand(TV *tv)
{
	this->tv = tv;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
TVOnCommand::~TVOnCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void TVOnCommand::execute()
{
	tv->on();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void TVOnCommand::undo()
{
	tv->off();
}
