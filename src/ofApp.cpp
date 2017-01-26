#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(60, 179, 113);
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    /*randR = ofRandom(255);
    randG = ofRandom(255);
    randB = ofRandom(255);
    
    ofBackground(randR, randG, randB);
    
    string info = "fps: " + ofToString(ofGetFrameRate(),2);
    string rgbValues = "RGB (" + ofToString(randR) + ", " + ofToString(randG) + ", " + ofToString(randB) + ")";
    ofDrawBitmapString(info, 100, 100);
    ofDrawBitmapString(rgbValues, 100, 110); */
    
    ofSetColor(248, 131, 121);
    ofDrawCircle(ofGetWidth()/3, ofGetHeight()/2, 100);
    ofSetColor(248, 121, 175);
    ofDrawRectangle(500, 500, 200, 200);
    ofSetColor(121, 175, 248);
    ofDrawTriangle(200, 200, 250, 250, 150, 250);
    
    

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
