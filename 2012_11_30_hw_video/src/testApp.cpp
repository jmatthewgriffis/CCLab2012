#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    appleMovie.loadMovie("gone_apple.mov");
    appleMovie.play();
    paused = false;
}

//--------------------------------------------------------------
void testApp::update(){

    appleMovie.update();
}

//--------------------------------------------------------------
void testApp::draw(){

    // Center the video:
    appleMovie.draw((ofGetWidth()/2)-(appleMovie.getWidth()/2), (ofGetHeight()/2)-(appleMovie.getHeight()/2));
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
            
        default:
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