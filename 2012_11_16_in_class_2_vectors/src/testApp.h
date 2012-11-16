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
    
    
    ofVec3f point; // This is a vector. This particular one can keep 3 variables.
    // Vectors are the same as ArrayList. They have a variable size.
    
    //ofPoint // It can keep 3 variables. (ofPoint is an instance of ofVec3f.)
    
    vector<ofVec3f> pts;
		
};
