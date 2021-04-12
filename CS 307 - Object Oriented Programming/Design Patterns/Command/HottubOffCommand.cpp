//=========================================================================
// HottubOffCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "HottubOffCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
HottubOffCommand::HottubOffCommand(Hottub *hottub)
{
	this->hottub = hottub;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
HottubOffCommand::~HottubOffCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void HottubOffCommand::execute()
{
	hottub->off();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void HottubOffCommand::undo()
{
	hottub->on();
}
