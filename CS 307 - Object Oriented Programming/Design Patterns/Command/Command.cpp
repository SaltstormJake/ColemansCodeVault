//======================================================================
// Command.h
// Implementation of the interface class which serves as the parent of 
//   all subclasses demonstrating the Command Design Pattern
//======================================================================
#include "Command.h"

//-----------------------------------
// Default constructor
//-----------------------------------
Command::Command()
{
}

//-----------------------------------
// Destructor
//-----------------------------------
Command::~Command()
{
}

//-----------------------------------
// Execute the command.  Virtual
//  function that all subclasses must
//  implement.
//-----------------------------------
void Command::execute()
{
}
