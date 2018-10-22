#include "ofApp.h"

//array of drop objects
//Drop[] drops = new Drop[500];

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(230, 230, 250);
    

    
    myDrop.setup(); // calling the object's setup method
//    for (int i = 0; i < drops.length; i++) {
//        drops[i] = new Drop();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //set origin 0,0 to center of the screen
    //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
//    ofSetColor(255, 255, 255); //set color of circle
//    ofDrawCircle(200, mouseY, 10);
    
//    for(int i=0; i < drops; i++){
//        groupOfDrops[i].setup();
//    }
    
    myDrop.draw(); // calling the object's update method

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//Drop drops = new Drop(500);
//vector<Drop> drops;
//Drop(500);

#define drops 500
Drop groupOfDrops[drops];
////int drops = 500;

//float Drop::size = [500];


void Drop::fall() {
    y = y + yspeed;
    float grav = ofMap(z, 0, 20, 0, 0.2); //to make the movement more natural
    yspeed = yspeed + grav;
    
    //so the drops reset to the top
    //    if (y > ofGetHeight()) {
    //        y = ofRandom(-200, -100);
    //        yspeed = ofMap(z, 0, 20, 4, 10);
    //    }
    if (y > 600) {
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
    for(int i = 0; i < 500; i++){
        groupOfDrops[i].setup();
    }
}

void Drop::draw() {
    for(int i = 0; i < drops; i++){
        groupOfDrops[i].setup();
    }
}
