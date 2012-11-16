//
//  videoContainer.h
//  2012_11_16_in_class
//
//  Created by John Matthew Griffis on 11/16/12.
//
//

#ifndef _012_11_16_in_class_videoContainer_h
#define _012_11_16_in_class_videoContainer_h

#include "ofMain.h"


class videoContainer {
public:
    
    void setup(float x, float y);
    void update();
    void draw(float x, float y, float w, float h);
    
    ofVideoPlayer video;
    
    float xPos, yPos;
    float videoW, videoH;

};



#endif
