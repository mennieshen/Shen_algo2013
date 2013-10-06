//
//  Particle.h
//  week05_assignment_imageParticle
//
//  Created by MennieShen on 13/9/30.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle( ofVec2f position );
    
    void update(const ofImage &img);
    void draw();
    
    ofVec2f pos;
    
    
    //
    float   radius;
    float   rValue;
    float   gValue;
    float   bValue;
};