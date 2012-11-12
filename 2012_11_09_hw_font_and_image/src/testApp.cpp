#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
    ofBackground(0,255,0);
    
	verdana14.loadFont("verdana.ttf", 36, true, true);
    
    swirls.loadImage("youmatter.jpg");
	    
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255,0,0);
	
    verdana14.drawString("THIS IS MY TEXT\nIT'S NOT YOUR TEXT\nIT'S MY TEXT", 100, 100);
    
    swirls.draw(300, 300);
    
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
