//======================================================================
// LightOffCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"

class LightOffCommand : public Command
{
   private:
      Light *light;
   public:
      LightOffCommand(Light *light);
	  ~LightOffCommand();
      void execute();
      void undo();
};

#endif
