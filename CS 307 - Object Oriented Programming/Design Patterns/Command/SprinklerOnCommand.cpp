//=========================================================================
// SprinklerOnCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "SprinklerOnCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
SprinklerOnCommand::SprinklerOnCommand(Sprinkler *sprinkler)
{
	this->sprinkler = sprinkler;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
SprinklerOnCommand::~SprinklerOnCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void SprinklerOnCommand::execute()
{
	sprinkler->on();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void SprinklerOnCommand::undo()
{
	sprinkler->off();
}
