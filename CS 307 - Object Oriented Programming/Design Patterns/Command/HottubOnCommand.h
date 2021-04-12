//======================================================================
// HottubOnCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef HOTTUBONCOMMAND_H
#define HOTTUBONCOMMAND_H

#include "Command.h"
#include "Hottub.h"

class HottubOnCommand : public Command
{
   private:
      Hottub *hottub;
   public:
      HottubOnCommand(Hottub *hottub);
	  ~HottubOnCommand();
      void execute();
      void undo();
};

#endif