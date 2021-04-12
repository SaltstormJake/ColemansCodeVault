//======================================================================
// SprinklerOnCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef SPRINKLERONCOMMAND_H
#define SPRINKLERONCOMMAND_H

#include "Command.h"
#include "Sprinkler.h"

class SprinklerOnCommand : public Command
{
   private:
      Sprinkler *sprinkler;
   public:
      SprinklerOnCommand(Sprinkler *sprinkler);
	  ~SprinklerOnCommand();
      void execute();
      void undo();
};

#endif