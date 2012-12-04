#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    int rad; // Radius of circles.
    int limit; // Most circles onscreen at once.
    int counter; // Use to time drawing events.
    int frequency; // Use to control the counter.
    int counter2; // Use to change the frequency.
    int frequency2; // Use to control the counter2.
    int seconds; // Use to display survival time.
    int frac_seconds; // Use to control seconds.
    
    int gameState; // Use this to control the game state.
    
    
    ofVec3f circle; // This is a vector. This particular one can keep 3 variables.
    // Vectors are the same as ArrayList. They have a variable size.
    
    vector<ofVec3f> myCircles; // This is how to declare an array (this one of vectors).
    
    ofImage pin;
    
    ofSoundPlayer bubble;
    ofSoundPlayer pop;
    
};
