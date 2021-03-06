#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofVec3f pos;
    ofVec3f vel;
    ofFbo   mFbo;
    
    float scaledTime;
    float angle;
    
    double  lastTime;
    float   timeScale;
    float dt;
    float mass;
    ofVec2f accel;
    
    void applyForce( ofVec2f force );
    
    int num;
    

};