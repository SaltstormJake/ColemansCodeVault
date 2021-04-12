//=========================================================================
// SecuritySystemOnCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "SecuritySystemOnCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
SecuritySystemOnCommand::SecuritySystemOnCommand(SecuritySystem *securitySys)
{
	this->securitySys = securitySys;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
SecuritySystemOnCommand::~SecuritySystemOnCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void SecuritySystemOnCommand::execute()
{
	securitySys->on();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void SecuritySystemOnCommand::undo()
{
	securitySys->off();
}
