#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    rad = 15;
    limit = 5;
    counter = 0;
    frequency = 60;
}

//--------------------------------------------------------------
void testApp::update(){
    
    counter += 1;
    
    // Every so often we will draw a circle in a random place:
    if (counter == 60) {
        ofVec3f temp;
        temp.x = ofRandom(ofGetWidth());
        temp.y = ofRandom(ofGetHeight());
        
        // Use this to shift elements in the array
        // over to make room for each new instance of the 'temp' object:
        myCircles.push_back(temp);
        
        // Reset the counter:
        counter = 0;
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(0);
    ofNoFill();
    
    for (int i=0; i<myCircles.size(); i++) {
        ofCircle(myCircles[i].x, myCircles[i].y, rad);
    }
        
    if (myCircles.size()>limit) {
        myCircles.erase(myCircles.begin());
    }
    
    //cout<<myCircles.size()<<endl; // Print the number of elements in the vector.
    
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
    /*ofVec3f temp;
    temp.x = x;
    temp.y = y;
    
    // Use this to shift elements in the array
    // over to make room for each new instance of the 'temp' object:
    myCircles.push_back(temp);
    */
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