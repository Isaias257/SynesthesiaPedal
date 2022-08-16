#ifndef FILLSOLID_H
#define FILLSOLID_H

class FILLSOLID{
  public:
    FILLSOLID();

// PRESET FILL COLORS 
    void green();
    void red();
    void orange();
    void purple();
    void blue();
    void yellow();
    
// TURN OFF EFFECTS
    void fadetoblackby(int rate);
    void clearall();

// ANIMATIONS
    void phasesparkle();
    void redsparklebuild();
    void redwhitesparklebuild();
    void redsparklefade();
    void whitesparklefade();
    void redwhitesparklefade();
    void sawtooth();
    void rainbow();
    void rainbow2();

    
    
};


#endif
