//=========================================================================
// StereoOffCommand.cpp
// Implementation for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//=========================================================================
#include "StereoOffCommand.h"

//-------------------------------------------
// Default constructor
//-------------------------------------------
StereoOffCommand::StereoOffCommand(Stereo *stereo)
{
	this->stereo = stereo;
}

//-------------------------------------------
// Destructor
//-------------------------------------------
StereoOffCommand::~StereoOffCommand()
{
}

//-------------------------------------------
// Execute this command
//-------------------------------------------
void StereoOffCommand::execute()
{
	stereo->off();
}

//-------------------------------------------
// Undo this command
//-------------------------------------------
void StereoOffCommand::undo()
{
	stereo->on();
}
