#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    rad = 15;
    limit = 5;
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(0);
    ofNoFill();
    
    for (int i=0; i<myCircles.size(); i++) {
        ofCircle(myCircles[i].x, myCircles[i].y, rad);
    }
    /*ofBeginShape();
    
    for (int i=0; i<pts.size(); i++) {
        
        float inc;
        ofVertex(pts[i].x, pts[i].y, pts[i].z+inc);
        
        inc-=10;
        
    }
    
    ofEndShape();
     */
    
    if (myCircles.size()>limit) {
        myCircles.erase(myCircles.begin());
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
    
    /*ofVec3f temp; // Instance of the ofVec3f object (a vector).
    temp.x = x; // x, y and z are the names of the variables within
    // the vector; however, they don't have to be the conventional
    // x, y and z.
    temp.y = y;
    
    pts.push_back(temp); // Use this to shift elements in the array
    // over to make room for each new instance of the 'temp' object.
    */
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    ofVec3f temp;
    temp.x = x;
    temp.y = y;
    
    myCircles.push_back(temp);
    
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