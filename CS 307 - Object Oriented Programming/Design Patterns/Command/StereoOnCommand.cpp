//=========================================================================
// StereoOnCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "StereoOnCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
StereoOnCommand::StereoOnCommand(Stereo *stereo)
{
	this->stereo = stereo;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
StereoOnCommand::~StereoOnCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void StereoOnCommand::execute()
{
	stereo->on();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void StereoOnCommand::undo()
{
	stereo->off();
}
