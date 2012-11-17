#pragma once

#include "ofMain.h"
#include "videoContainer.h"

#define NUM 6 // This is equivalent to establishing and defining a variable
// for quantity in Processing. It tells the code to replace any instance of 'NUM'
// with '6'.

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
    
    //Don't need the following object anymore because we are using an array now:
    //videoContainer kyle;
    
    videoContainer myVideo[NUM]; // Good old array.
    
    float increment;
    
};
