#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"

#include "Particles.h"

class testApp : public ofSimpleApp{
	
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased (int key);
    
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased();
    
    vector <Particles> particles;
    vector<Particles> particles2;
    vector<ofColor> pColor;
    vector<ofColor> pColor2;
    
    bool addForceSwitch;
    
    void addParticle();
    
    ofVec2f circleCenter;
    ofVec2f pos, vel;
    
    float circleRadius;
    
    vector<Particles>    particleList;

	
	
};

#endif

