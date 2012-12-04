#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    rad = 15;
    limit = 50;
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
    
    // Let's erase a circle by moving the mouse over it!
    // I must thank this website for the erase syntax;
    // it was really causing me problems figuring it out:
    // http://julioterra.com/journal/tag/open-frameworks/
    for (int i=0; i<myCircles.size(); i++) {
        if (ofDist(x, y, myCircles[i].x, myCircles[i].y) < rad) {
            myCircles.erase(myCircles.begin()+i);
        }
    }
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