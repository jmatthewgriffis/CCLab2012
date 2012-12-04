#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    rad = 30;
    limit = 50;
    counter = 0;
    frequency = 240;
    
    pin.loadImage("pin.jpg");
    
    // Thanks to flowfx for this sound effect, "Big Bubble Blown Into Glass Through
    // Drinking Straw Version 1," which I don't actually have permission to use.
    // http://www.freesfx.co.uk/sfx/bubble :
    bubble.loadSound("bubble.mp3");
    
    // This sound I recorded and edited myself with GarageBand! I permit
    // myself to use it:
    pop.loadSound("pop.mp3");
}

//--------------------------------------------------------------
void testApp::update(){
    
    counter += 1;
    
    // Every so often we will draw a circle in a random place:
    if (counter == frequency) {
        ofVec3f temp;
        temp.x = ofRandom(ofGetWidth());
        temp.y = ofRandom(ofGetHeight());
        
        // Use this to shift elements in the array
        // over to make room for each new instance of the 'temp' object:
        myCircles.push_back(temp);
        
        // Play a sound effect:
        bubble.play();
        
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
    
    ofSetColor(255); // Reset color.
    
    //eraser.draw(mouseX-(eraser.getWidth()/2), mouseY-(eraser.getHeight()/2), 50, 50); // Don't use this line because we've limited the display size of the
    // image, which would throw off the positioning here. Use this instead:
    pin.draw(mouseX-(75/2), mouseY-(75/2), 75, 75);
    ofHideCursor();
    
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
            
            // Play a sound effect:
            pop.play();
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