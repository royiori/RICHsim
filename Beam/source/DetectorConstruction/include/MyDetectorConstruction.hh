//*********************************************
//  This is auto generated by G4gen 0.6
//                                  author:Qian

#ifndef _MyDETECTORCONSTRUCTION_H_
#define _MyDETECTORCONSTRUCTION_H_

#include "G4VUserDetectorConstruction.hh"
#include "G4GDMLParser.hh"

#include "MyDetectorSettings.hh"
class G4GlobalMagFieldMessenger;
class MyDetectorMessenger;

/// Detector construction for laoding GDML geometry

class MyDetectorConstruction : public G4VUserDetectorConstruction
{
public:
    MyDetectorConstruction();
    ~MyDetectorConstruction();

    virtual G4VPhysicalVolume *Construct();
    virtual void ConstructSDandField();

    void SetReadFile(const G4String &fname);
    void SetWriteFile(const G4String &fname);

    //#AuxXML 2. 定义与Setting的接口函数
    MyDetectorSettings* GetDetSettings() { return fSettings; }
    
private:
    G4GDMLReadStructure *fReader;
    G4GDMLWriteStructure *fWriter;
    G4GDMLParser *fParser;
    G4String fReadFile, fWriteFile;
    G4bool fWritingFlag;
    
    G4GlobalMagFieldMessenger *fMagFieldMessenger;

    MyDetectorSettings *fSettings;
    MyDetectorMessenger *fDetectorMessenger;
};

#endif
