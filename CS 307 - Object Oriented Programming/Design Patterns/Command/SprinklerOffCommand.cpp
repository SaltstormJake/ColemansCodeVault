//=========================================================================
// SprinklerOffCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "SprinklerOffCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
SprinklerOffCommand::SprinklerOffCommand(Sprinkler *sprinkler)
{
	this->sprinkler = sprinkler;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
SprinklerOffCommand::~SprinklerOffCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void SprinklerOffCommand::execute()
{
	sprinkler->off();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void SprinklerOffCommand::undo()
{
	sprinkler->on();
}
