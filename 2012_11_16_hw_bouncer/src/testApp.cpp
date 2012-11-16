#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetCircleResolution(60);
    ofEnableSmoothing();
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    
    size = 200;
    color = 128;
    inc = 50;
    yPos = ofGetHeight()/2;
    yVel = 5;
    
}

//--------------------------------------------------------------
void testApp::update(){
    yPos += yVel;
    
    /*if (color >= 255 || color <= 0) {
        inc *= -1;
    }*/
    
    if (yPos + size >= ofGetHeight() || yPos - size <= 0) {
        yVel *= -1;
        
        if (color + inc > 255) {
            color += 255-color;
            inc *= -1;
        }
        else if (color + inc < 0) {
            color -= color;
            inc *= -1;
        }
        else if (color < 255 - inc && color > 0 + inc) {
            color += inc;
        }
    }
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(color);
    ofCircle(ofGetWidth()/2, yPos, size);
    ofSetColor(255); //Reset color.
    
    cout<<"color is "<<color<<" and inc is "<<inc<<endl;
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}