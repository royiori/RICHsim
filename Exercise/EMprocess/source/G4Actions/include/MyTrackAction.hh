//*********************************************
//  This is auto generated by G4gen 0.6
//                                  author:Qian

#ifndef MyTrackAction_h
#define MyTrackAction_h 1

#include "G4UserTrackingAction.hh"
#include "globals.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

class MyTrackAction : public G4UserTrackingAction
{
public:
    MyTrackAction();
    virtual ~MyTrackAction();

    virtual void PostUserTrackingAction(const G4Track*);
};

#endif