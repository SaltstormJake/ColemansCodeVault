//======================================================================
// StereoOnCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef STEREOONCOMMAND_H
#define STEREOONCOMMAND_H

#include "Command.h"
#include "Stereo.h"

class StereoOnCommand : public Command
{
   private:
      Stereo *stereo;
   public:
      StereoOnCommand(Stereo *stereo);
	  ~StereoOnCommand();
      void execute();
      void undo();
};

#endif