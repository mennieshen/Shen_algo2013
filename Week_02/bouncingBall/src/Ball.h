//
//  Ball.h
//  bouncingBall
//
//  Created by MennieShen on 13/9/3.
//
//

#pragma once

#include "ofMain.h"

class Ball {
  
public:
    
    Ball();
    
    void update();
    void draw();

    ofVec2f pos; // vectors
    float xVelocity;
    float yVelocity;

};