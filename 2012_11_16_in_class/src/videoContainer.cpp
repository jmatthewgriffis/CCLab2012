//
//  videoContainer.cpp
//  2012_11_16_in_class
//
//  Created by John Matthew Griffis on 11/16/12.
//
//

#include "videoContainer.h"

//--------------------------------------------------------------

void videoContainer::setup(float x, float y) {
    
    video.loadMovie("kyle.mov");
    video.play();
    
    xPos = x;
    yPos = y;
    
    videoW = video.getWidth() / 3;
    videoH = video.getHeight() / 3;
    
}

void videoContainer::update() {
    
    video.update();
    
}

void videoContainer::draw(float x, float y, float w, float h) {
    
    //video.draw(xPos,yPos, videoW, videoH);
    video.draw(x,y, w, h);
    
}