//=========================================================================
// LightOffCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "LightOffCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
LightOffCommand::LightOffCommand(Light *light)
{
	this->light = light;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
LightOffCommand::~LightOffCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void LightOffCommand::execute()
{
	light->off();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void LightOffCommand::undo()
{
	light->on();
}
