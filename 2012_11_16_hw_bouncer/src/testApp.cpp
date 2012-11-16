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
    
    //Fun with bouncing:
    if (yPos + size >= ofGetHeight() || yPos - size <= 0) { //Ball hits the top or bottom.
        yVel *= -1; //Reverse direction.
        
        //This part was tougher than I expected. Every time the ball bounces it
        //gains or loses color until it hits the top or bottom respectively of the
        //spectrum, at which point it flips from gaining to losing or vice-versa.
        if (color + inc > 255) {
            color += 255-color;
            inc *= -1;
        }
        else if (color + inc < 0) {
            color = 0;
            inc *= -1;
        }
        else {
            color += inc;
        }
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(color);
    ofCircle(ofGetWidth()/2, yPos, size);
    ofSetColor(255); //Reset color.
    
    //cout<<"color is "<<color<<" and inc is "<<inc<<endl;
    
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