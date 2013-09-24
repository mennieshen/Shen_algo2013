//
//  Particles.h
//  week_04_assignment_fireworks
//
//  Created by MennieShen on 13/9/21.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle(){};
    void setup( ofVec2f rVel );
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f vel;
    int age, lifespan;
    bool bIsDead;
    
    //vector<ofColor> pColor;
};
