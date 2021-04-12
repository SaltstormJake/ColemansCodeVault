//=========================================================================
// LightOnCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "LightOnCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
LightOnCommand::LightOnCommand(Light *light)
{
	this->light = light;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
LightOnCommand::~LightOnCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void LightOnCommand::execute()
{
	light->on();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void LightOnCommand::undo()
{
	light->off();
}
