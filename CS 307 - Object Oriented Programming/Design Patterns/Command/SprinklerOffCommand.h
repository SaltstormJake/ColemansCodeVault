//======================================================================
// SprinklerOffCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef SPRINKLEROFFCOMMAND_H
#define SPRINKLEROFFCOMMAND_H

#include "Command.h"
#include "Sprinkler.h"

class SprinklerOffCommand : public Command
{
   private:
      Sprinkler *sprinkler;
   public:
      SprinklerOffCommand(Sprinkler *sprinkler);
	  ~SprinklerOffCommand();
      void execute();
      void undo();
};

#endif