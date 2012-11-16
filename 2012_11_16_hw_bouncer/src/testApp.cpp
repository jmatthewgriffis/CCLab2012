#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetCircleResolution(60);
    ofEnableSmoothing();
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    
    size = 100; //Ball size.
    color = 128; //Ball color.
    inc = 25; //Increment by which the color changes.
    inc2 = 10; //Increment by which the size changes.
    yPos = ofGetHeight()/2; //Ball yPos.
    yVel = 5; //Ball y-velocity.
    grav = .3; //Slow the bouncing!
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    yPos += yVel;
    yVel += grav;
    
    if (yVel > -grav && yVel < grav) {
        yVel = 0;
    }
    
    //Fun with bouncing:
    if (yPos + size >= ofGetHeight() || yPos - size <= 0) { //Ball hits the top or bottom.
        yVel = (yVel - grav) * -1; //Reverse direction. Subtracing an increment of
        //gravity at this moment counters the addition above and ensures the ball
        //doesn't bounce ever higher.
        
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
    
    //Let's do the same thing with the ball size.
    if (yVel == 0) {
        size += inc2;
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(color);
    ofCircle(ofGetWidth()/2, yPos, size);
    ofSetColor(255); //Reset color.
    
    //Print for debugging with this:
    cout<<"yVel is "<<yVel<<" and size is "<<size<<endl;
    
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