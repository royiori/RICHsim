//*********************************************
//  This is auto generated by G4gen 0.6
//                                  author:Qian

#ifndef MyDetectorMessenger_h
#define MyDetectorMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class MyDetectorConstruction;
class G4UIdirectory;
class G4UIcmdWithAString;

/// Detector messenger for the GDML extensions example

class MyDetectorMessenger : public G4UImessenger
{

public:
    MyDetectorMessenger(MyDetectorConstruction *);
    ~MyDetectorMessenger();

    virtual void SetNewValue(G4UIcommand *, G4String);

private:
    MyDetectorConstruction *fTheDetector;
    G4UIdirectory *fTheDetectorDir;
    G4UIcmdWithAString *fTheReadCommand, *fTheWriteCommand;
};

// ----------------------------------------------------------------------------

#endif