//
//  videoContainer.h
//  2012_11_16_in_class
//
//  Created by John Matthew Griffis on 11/16/12.
//
//

#ifndef _012_11_16_in_class_videoContainer_h
#define _012_11_16_in_class_videoContainer_h

#include "ofMain.h" // This file contains all the OF code. Make sure to
// "include" this.

//--------------------------------------------------------------

class videoContainer {
    
public: // This is important. Set this to public to allow access to the code
    // from outside the class. Set it to private to only allow access within
    // the class.
    
    void setup(float x, float y);
    void update();
    void draw(float x, float y, float w, float h);
    
    ofVideoPlayer video;
    float videoW, videoH;
    
};



#endif
