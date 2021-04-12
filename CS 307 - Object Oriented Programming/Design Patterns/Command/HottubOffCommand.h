//======================================================================
// HottubOffCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef HOTTUBOFFCOMMAND_H
#define HOTTUBOFFCOMMAND_H

#include "Command.h"
#include "Hottub.h"

class HottubOffCommand : public Command
{
   private:
      Hottub *hottub;
   public:
      HottubOffCommand(Hottub *hottub);
	  ~HottubOffCommand();
      void execute();
      void undo();
};

#endif