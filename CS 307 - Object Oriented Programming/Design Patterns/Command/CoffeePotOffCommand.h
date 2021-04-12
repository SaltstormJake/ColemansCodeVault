//======================================================================
// CoffeePotOffCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef COFFEEPOTOFFCOMMAND_H
#define COFFEEPOTOFFCOMMAND_H

#include "Command.h"
#include "CoffeePot.h"

class CoffeePotOffCommand : public Command
{
   private:
      CoffeePot *coffeePot;
   public:
      CoffeePotOffCommand(CoffeePot *coffeePot);
	  ~CoffeePotOffCommand();
      void execute();
      void undo();
};

#endif