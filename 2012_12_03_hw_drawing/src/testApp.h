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
    float counter; // Use to time drawing events.
    int frequency; // Use to control the counter.
    
    
    ofVec3f circle; // This is a vector. This particular one can keep 3 variables.
    // Vectors are the same as ArrayList. They have a variable size.
    
    vector<ofVec3f> myCircles; // This is how to declare an array (this one of vectors).
    
    ofImage eraser;
    
};
