#include "photons.h"

//Drop drops = new Drop(500);
//vector<Drop> drops;
//Drop(500);

#define drops 500

Drop groupOfDrops[drops];

//creation of the class without arguments
Drop::Drop() {
    x  = ofRandom(ofGetWidth()); //random starting location
    y  = ofRandom(-500, -50); //random y location and start off screen
    z  = ofRandom(0, 20); ///pseudo parallax
    len = ofMap(z, 0, 20, 10, 20); //different rain drop length
    yspeed  = ofMap(z, 0, 20, 1, 20);
}

void Drop::fall() {
    y = y + yspeed;
    float grav = ofMap(z, 0, 20, 0, 0.2); //to make the movement more natural
    yspeed = yspeed + grav;
    
    //so the drops reset to the top
    if (y > ofGetHeight()) {
        y = ofRandom(-200, -100);
        yspeed = ofMap(z, 0, 20, 4, 10);
    }
}

void Drop::show() {
    float thick = ofMap(z, 0, 20, 1, 3);
    ofSetLineWidth(thick);
    ofSetColor(138, 43, 226);
    ofDrawLine(x, y, x, y + len);

}

void Drop::setup() {
    for(int i=0; i < drops; i++){
        groupOfDrops[i].setup();
    }
}

void Drop::draw() {
    for(int i=0; i < drops; i++){
        groupOfDrops[i].setup();
    }
}
