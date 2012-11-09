#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    size = 50;
    ofSetCircleResolution(60); //Controls the number of "sides" that compose the circle. The computer uses vertices (triangles) to draw curved surfaces, so setting this value higher makes the rounding appear smoother.
    
    ofEnableSmoothing(); //Good for lines; not so much for circles. Processing "smooth," this is not.
    
    ofBackground(255, 100, 40);
    
    ofSetFrameRate(60);
    
    ofSetVerticalSync(true); //This synchronizes the frame rate within OF with the screen's refresh rate in order to eliminate artificing.
    
}

//--------------------------------------------------------------
void testApp::update(){ //In OF it's better to perform updating actions within the "update" function and just draw in the "draw" function.
    yPos ++;
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofCircle(100, yPos, size);
    ofEllipse(mouseX, mouseY, size*2, size*3);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(ofGetWidth()/2, ofGetHeight()/2, 50, 50);
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    
    ofLine(ofGetWidth(), ofGetHeight(), ofGetWidth()/2, ofGetHeight()/2);
    
    cout<<"mysize is: "<<size<<endl; //Use this to print to the debug console. "Size" is a variable I created while "endl" cues a line break.
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

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