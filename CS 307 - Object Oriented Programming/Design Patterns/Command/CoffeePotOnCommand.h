//======================================================================
// CoffeePotOnCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef COFFEEPOTONCOMMAND_H
#define COFFEEPOTONCOMMAND_H

#include "Command.h"
#include "CoffeePot.h"

class CoffeePotOnCommand : public Command
{
   private:
      CoffeePot *coffeePot;
   public:
      CoffeePotOnCommand(CoffeePot *coffeePot);
	  ~CoffeePotOnCommand();
      void execute();
      void undo();
};

#endif