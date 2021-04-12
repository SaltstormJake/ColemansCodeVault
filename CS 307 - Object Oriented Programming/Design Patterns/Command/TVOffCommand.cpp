//=========================================================================
// TVOffCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "TVOffCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
TVOffCommand::TVOffCommand(TV *tv)
{
	this->tv = tv;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
TVOffCommand::~TVOffCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void TVOffCommand::execute()
{
	tv->off();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void TVOffCommand::undo()
{
	tv->on();
}
