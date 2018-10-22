#include "ofApp.h"

//array of drop objects
Drop[] drops = new Drop[500];

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

