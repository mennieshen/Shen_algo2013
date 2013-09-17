//
//  circle.h
//  week_03_assignment_3
//
//  Created by MennieShen on 13/9/17.
//
//

#pragma once
#include "ofMain.h"

class circle {
  
    public:
    
    circle();
    
    void update();
    void draw();
    
    vector<ofPoint> points;
    float angle;
    float startAngle;
    float radius;
};