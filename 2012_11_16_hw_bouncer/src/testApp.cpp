#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetCircleResolution(60);
    ofEnableSmoothing();
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    
    size = 170; // Ball size.
    color = 128; // Ball color.
    inc = 25; // Increment by which the color changes.
    inc2 = 25; // Increment by which the size changes.
    yPos = ofGetHeight()/2; // Ball yPos.
    xPos = ofGetWidth()/2; // Ball xPos.
    yVel = 5; // Ball y-velocity.
    xVel = 0; // Ball x-velocity.
    grav = .3; // Slow the vertical bouncing!
    friction = .7; // Slow the sideways-bouncing!
    fist.loadImage("fist.jpg");
    fist.resize(fist.width/3, fist.height/3);
    ofHideCursor(); // Hide the mouse because we're using an image instead.
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    yPos += yVel;
    yVel += grav;
    xPos += xVel;
    
    // Control sideways-motion:
    if (xVel != 0) { // If there is any,
        xVel *= friction; // slow it down.
    }
    if (xVel > -.1 && xVel < .1) { // If xVel is very small,
        xVel = 0; // make it zero.
    }
    
    // Fun with bouncing:
    if (yPos >= ofGetHeight() - size || yPos <= size) { // Ball hits the top or bottom.
        yVel = (yVel - grav) * -1; // Reverse direction. Subtracing an increment of
        // gravity at this moment counters the addition above and ensures the ball
        // doesn't bounce ever higher.
        
        // This part was tougher than I expected. Every time the ball bounces it
        // gains or loses color until it hits the top or bottom respectively of the
        // spectrum, at which point it flips from gaining to losing or vice-versa.
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
    
    // Let's do the same thing with the ball size.
    // We do this first to make sure the yVel gets to the value we need:
    if (yVel > -grav && yVel < grav) {
        yVel = 0;
    }
    // Then we change the size at that value:
    if (yVel == 0) {
        size += inc2;
    }
    // Need to limit the size:
    if ((size >= 325) || size <= 25) {
        inc2 *= -1;
        // Whenever the direction of change in size reverses, switch between
        // good and evil.
        if (evil == false) {
            evil = true;
        }
        else {
            evil = false;
        }
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(color);
    ofCircle(xPos, yPos, size);
    ofSetColor(255); // Reset color.
    
    // Make a creepy face sometimes! Everyone likes those, right?
    ofSetColor(255, 0, 0);
    if (evil == true) {
        // Left evil eye:
        ofTriangle(xPos-size/2, yPos-size/3, xPos-size/3.5, yPos-size/4.25, xPos-size/4.25, yPos-size/3);
        // Right evil eye:
        ofTriangle(xPos+size/2, yPos-size/3, xPos+size/3.5, yPos-size/4.25, xPos+size/4.25, yPos-size/3);
    }
    else {
        ofCircle(xPos - (size/3), yPos - (size/3), 12, size/10); // Left eye.
        ofCircle(xPos + (size/3), yPos - (size/3), 12, size/10); // Right eye.
    }
    
    // Draw the mouth. A bit more complex:
    ofBeginShape();
    ofVertex(xPos - (size/1.5), yPos + (size/3));
    ofVertex(xPos - (size/2), yPos + (size/2.5));
    ofVertex(xPos - (size/4), yPos + (size/2));
    ofVertex(xPos, yPos + (size/1.75));
    ofVertex(xPos + (size/4), yPos + (size/2));
    ofVertex(xPos + (size/2), yPos + (size/2.5));
    ofVertex(xPos + (size/1.5), yPos + (size/3));
    ofVertex(xPos - (size/4), yPos + (size/2.75));
    ofVertex(xPos + (size/4), yPos + (size/2.75));
    ofEndShape();
    
    ofSetColor(255); // Reset the color.
    
    //Draw the image centered on the mouse cursor:
    fist.draw(mouseX-fist.width/2, mouseY-fist.height/2);
    
    // Print for debugging with this:
    cout<<"xVel is "<<xVel<<endl;
    
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