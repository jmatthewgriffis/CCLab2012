#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(0);
    ofNoFill();
    ofBeginShape();
    
    for (int i=0; i<pts.size(); i++) {
        
        ofVertex(pts[i].x, pts[i].y);
        
    }
    
    ofEndShape();
    
    if (pts.size()>50) {
        pts.erase(pts.begin());
    }
    
    //cout<<pts.size()<<endl; // Print the number of elements in the vector.

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
    
    ofVec3f temp;
    temp.x = x;
    temp.y = y;
    
    pts.push_back(temp);

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