//=========================================================================
// SecuritySystemOffCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "SecuritySystemOffCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
SecuritySystemOffCommand::SecuritySystemOffCommand(SecuritySystem *securitySys)
{
	this->securitySys = securitySys;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
SecuritySystemOffCommand::~SecuritySystemOffCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void SecuritySystemOffCommand::execute()
{
	securitySys->off();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void SecuritySystemOffCommand::undo()
{
	securitySys->on();
}
