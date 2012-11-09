#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0,255,0,0); //Background is hideously green (and not transparent?).
    
    //Copied the following from the fonts example:
    //old OF default is 96 - but this results in fonts looking larger than in other programs.
	ofTrueTypeFont::setGlobalDpi(72);
    
    verdana14.loadFont("verdana.ttf", 14, true, true); //Not sure what the booleans do, but I upped the font size. Discovered this doesn't work without declaring the font in the testApp header file.
    
    //I can't get the text to display. I tried copying in the following lines from the example but they don't do it so I commented them out. Not sure what's missing.
    //verdana14.setLineHeight(18.0f);
	//verdana14.setLetterSpacing(1.037);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(255, 0, 0); //Text is hideously red.
    verdana14.drawString("Geez, these colors are hideous.", 200, 300); //Copied this from the fonts example but changed the string and its position.
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