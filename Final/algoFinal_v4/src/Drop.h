//
//  Drop.h
//  algoFinal_v2
//
//  Created by MennieShen on 13/12/11.
//
//

#pragma once
#include "ofMain.h"

class Drop{
    
    public:
    
    Drop();
    
    void draw();
    void update();
    
    ofColor c;

    
    float dropNoiseLevel;
    float dropRadius;
    float dropRadiusDefault;
    float trans;
    float offset;
    float noiseOffset;
    float noiseOffsetOutline;
    
    void setParams( float px, float py, float vx, float vy );
    void addForce( ofVec2f force );
    void addDampingForce();
    void resetForces();
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;
    ofVec2f damping;
    
};