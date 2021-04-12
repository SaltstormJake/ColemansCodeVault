//======================================================================
// TVOnCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef TVONCOMMAND_H
#define TVONCOMMAND_H

#include "Command.h"
#include "TV.h"

class TVOnCommand : public Command
{
   private:
      TV *tv;
   public:
      TVOnCommand(TV *tv);
	  ~TVOnCommand();
      void execute();
      void undo();
};

#endif