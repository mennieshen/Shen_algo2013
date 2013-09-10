//
//  Ball.h
//  week_02_assignment_d
//
//  Created by MennieShen on 13/9/9.
//
//

#pragma once
#include "ofMain.h"

class Ball {
  
    public:
    
    Ball();
    
    void draw();
    void update();

    ofVec2f pos;
    ofVec2f Velocity;
    ofVec2f accel, accelEarth, accelJupiter;

};