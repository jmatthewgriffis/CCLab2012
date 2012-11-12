#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
    //Looks better without a background.
    //ofBackground(0,255,0);
    
	verdana14.loadFont("verdana.ttf", 36, true, true);
    
    swirls.loadImage("youmatter.jpg");
    
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(100,100,100);
	
    verdana14.drawString("THIS IS MY TEXT\nIT'S NOT YOUR TEXT\nIT'S MY TEXT", 100, 100);
    
    /*
     Originally I only had the one SetColor command above. I discovered
     it was affecting the picture below. I wasn't sure how to reset the
     color, so I tried zero for black. That just turned the picture
     black. So I tried 255 for white. Interestingly, rather than turn the
     picture white, it simply let the picture display with its natural
     color. White is composed of all colors. Perhaps the SetColor command
     only allows the following element to display the colors within the
     spectrum up to the number specified. By naming white, I allow it to
     display all applicable colors. It's just my theory but it does make
     sense.
     */
    ofSetColor(255);
    
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
