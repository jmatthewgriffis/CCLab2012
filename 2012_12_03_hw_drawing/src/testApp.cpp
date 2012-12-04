#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    gameState = 1;
    rad = 30;
    limit = 5;
    counter = 0;
    frequency = 240; // This interval to generate one bubble.
    counter2 = 0;
    frequency2 = (240*5); // Every five bubbles, the speed will increase.
    
    // Jacked this image from the Internet:
    // http://www.photo-dictionary.com/photofiles/list/7448/10009pin.jpg :
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
    
    if (gameState == 1) {
    
    counter += 1;
    counter2 += 1;
    
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
    
    // Here we control the pace at which the action speeds up:
    if (counter2 == frequency2) {
        if(frequency >= 35) {
        frequency -= 5;
        }
        counter2 = 0;
    }
    }
    
    // It seems that when we reload setup() (as we do when pressing 'r'
    // to restart the game) it does not clear out the size of the vector,
    // which is a problem because that's what triggers Game Over, so it
    // just gets stuck in Game Over. Solution: the following code, which
    // erases all the bubbles in the vector if it's on the Game Over screen:
    if (gameState == 2) {
            for (int i = 0; i<myCircles.size(); i++) {
                myCircles.erase(myCircles.begin()+i);
            }
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    if (gameState == 1) {
    
    ofSetColor(0);
    ofNoFill();
    
    for (int i=0; i<myCircles.size(); i++) {
        ofCircle(myCircles[i].x, myCircles[i].y, rad);
    }
        
    if (myCircles.size()>limit) {
        //myCircles.erase(myCircles.begin());
        gameState = 2;
    }
    
    ofSetColor(255); // Reset color.
    
    //eraser.draw(mouseX-(eraser.getWidth()/2), mouseY-(eraser.getHeight()/2), 50, 50); // Don't use this line because we've limited the display size of the
    // image, which would throw off the positioning here. Use this instead:
    pin.draw(mouseX-(75/2), mouseY-(75/2), 75, 75);
    ofHideCursor();
    
    // Display the bubble count onscreen:
    ofDrawBitmapString("Bubbles: " + ofToString(myCircles.size()), 10, 20);
    
    //cout<<myCircles.size()<<endl; // Print the number of elements in the vector.
    }
    
    if (gameState == 2) {
        
        ofDrawBitmapString("game over :(\n\n'r' to restart", ofGetWidth()/2, ofGetHeight()/2);
    }
    }

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    switch (key) {
        case 'r':
        case 'R':
            // Restart the game (see the comment in the update
            // function regarding clearing the vector):
            setup();
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
    
    if (gameState == 1) {
    
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