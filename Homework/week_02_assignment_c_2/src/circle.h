//
//  circle.h
//  week_02_assignment_c
//
//  Created by MennieShen on 13/9/9.
//
//

#pragma once
#include "ofMain.h"

class Circle {
    
    public:
    
    Circle();
    
    //void update();
    void draw();
    void xenoToPoint(float catchX, float catchY);
    
    ofVec2f pos;
    float catchUpSpeed;
    
};