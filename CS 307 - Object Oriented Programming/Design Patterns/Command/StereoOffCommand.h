//======================================================================
// StereoOffCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H

#include "Command.h"
#include "Stereo.h"

class StereoOffCommand : public Command
{
   private:
      Stereo *stereo;
   public:
      StereoOffCommand(Stereo *stereo);
	  ~StereoOffCommand();
      void execute();
      void undo();
};

#endif