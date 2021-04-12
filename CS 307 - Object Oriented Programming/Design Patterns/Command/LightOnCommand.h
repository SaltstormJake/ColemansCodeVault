//======================================================================
// LightOnCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

class LightOnCommand : public Command
{
   private:
      Light *light;
   public:
      LightOnCommand(Light *light);
	  ~LightOnCommand();
      void execute();
      void undo();
};

#endif