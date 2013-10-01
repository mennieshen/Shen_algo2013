#pragma once

#include "ofMain.h"
#include "ofxUI.h"
#include "Particles.h"

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void exit();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void onGuiEvent(ofxUIEventArgs &e); // pass the address of the pointer??? // &e: this event
    
    
    ofxUICanvas *gui;
    float radius;
    
    void addParticle(float x, float y);
    vector<Particle> particleList;
    float r, g, b;
    int particleNumber;
};
