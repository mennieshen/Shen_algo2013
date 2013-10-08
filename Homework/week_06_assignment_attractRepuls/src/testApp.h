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
    
    // let's make a vector of them
    vector <Particles> particles;
    vector<Particles> particles2;
    vector<ofColor> pColor;
    
    bool addForceSwitch;
	
	
};

#endif

//
//ofColor tmpForceC;
//float blah2 = sin(ofGetElapsedTimef()) * 10;
//tmpForceC.setHsb(240, 125 + blah2, 240);
//tmpForceC.a = 100.0 * ofGetElapsedTimef() * 0.05;
//clockForceColor.push_back(tmpForceC);
//
//for(int j = 0; j < clockForceColor.size(); j++){
//    ofSetColor(clockForceColor[j]);
//}
//
//for (int i = 0; i < particles.size(); i++){
//    
//    particles[i].addCounterClockwiseForce(mouseX, mouseY, 1000, 100);
//}
