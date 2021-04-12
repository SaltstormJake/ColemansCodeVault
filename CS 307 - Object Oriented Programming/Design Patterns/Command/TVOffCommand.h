//======================================================================
// TVOffCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef TVOFFCOMMAND_H
#define TVOFFCOMMAND_H

#include "Command.h"
#include "TV.h"

class TVOffCommand : public Command
{
   private:
      TV *tv;
   public:
      TVOffCommand(TV *tv);
	  ~TVOffCommand();
      void execute();
      void undo();
};

#endif