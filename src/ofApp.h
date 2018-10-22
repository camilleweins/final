#pragma once

#include "ofMain.h"
//#include "photons.h"

//#define drops 500

class Drop {
public:
    float x  = ofRandom(800); //random starting location
    
    //    x  = ofRandom(ofGetWidth()); //random starting location
    float y  = ofRandom(-500, -50); //random y location and start off screen
    float z  = ofRandom(0, 20); ///pseudo parallax
    float len = ofMap(z, 0, 20, 10, 20); //different rain drop length
    float yspeed  = ofMap(z, 0, 20, 1, 20);
    
    Drop ();
    
    void setup();
    void draw();
    void fall(); //function for falling animation/behavior
    void show(); //render on screen
};
//Drop groupOfDrops[drops];

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        Drop myDrop; //what we want to use as a name for every instance of drop now
};
