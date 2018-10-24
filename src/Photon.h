#include "ofApp.h"

#ifndef Photon_h
#define Photon_h

class Photon {
    
public:
    Photon();
    
    void fall();
    void show();
    void run();
    void update();
    
private:
    float x; //random starting location
    float y; //random y location and start off screen
    float z; ///pseudo parallax
    float len; //different rain drop length
    float yspeed;
    
};

#endif /* Photon_h */
