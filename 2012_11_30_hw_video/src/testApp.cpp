#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    appleMovie.loadMovie("gone_apple.mov");
    appleMovie.play();
    paused = false;
    nooo = false;
    telepathy = false;
}

//--------------------------------------------------------------
void testApp::update(){

    if (telepathy == false) {
        // The video only advances through its frames with this
        // (interestingly it plays the audio regardless):
    appleMovie.update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){

    // Center the video:
    appleMovie.draw((ofGetWidth()/2)-(appleMovie.getWidth()/2), (ofGetHeight()/2)-(appleMovie.getHeight()/2));
    
    // Debug (at least for now) - displays the frame count and progression:
    /*("frame: " + ofToString(appleMovie.getCurrentFrame()) + "/"+ofToString(appleMovie.getTotalNumFrames()),20,380);*/
    
    // If Luke's horror should be looped (see keyPressed below),
    // check if the current frame is less than the first frame
    // of his horror, and if so, set it to that frame. Looping!
    if (nooo == true) {
    if (appleMovie.getCurrentFrame() < 1670) {
        appleMovie.setFrame(1670);
    }
    }
    
    // Let's provide instructions:
    ofSetHexColor(0x000000);
    
    if (paused == false) {
	ofDrawBitmapString("[SPACE]: pause",ofGetWidth()/2,125);
    }
    else {
        ofDrawBitmapString("[SPACE]: unpause",ofGetWidth()/2,125);
    }
    
    if (nooo == false) {
        ofDrawBitmapString("[n]: NOOO!",20,ofGetHeight()/2);
    }
    else {
        ofDrawBitmapString("[n]: !NOOO",ofGetWidth()-120,ofGetHeight()/2);
    }
    
    if (telepathy == false) {
        ofDrawBitmapString("[t]: activate telepathy",ofGetWidth()/2,650);
    }
    else {
        ofDrawBitmapString("[t] activate mouth movements",ofGetWidth()/2,650);
    }
    
    ofSetColor(255); // Reset the color.
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    switch (key) {
        case ' ':
            // This is nice - I guess it's a shorthand for saying
            // if it's on, turn it off, and vice-versa:
            paused=!paused;
            // I think the way this works is it pauses the movie
            // whenever the specified statement is true - in this
            // case that the "paused" boolean is set to true.
            appleMovie.setPaused(paused);
            break;
            
            // Loop Luke's horror:
            case 'n':
            case 'N':
            nooo=!nooo;
            break;
            
            // Telepathic communication:
            case 't':
            case 'T':
            telepathy=!telepathy;
            break;
    }
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