//
//  rectangle.h
//  week_01_assignment_e
//
//  Created by MennieShen on 13/9/3.
//
//

#pragma once

#include "ofMain.h"

class Rectangle {
    
public:
    
    Rectangle();
    
    void draw();
    
    void xenoToPoint(float catchX, float catchY);
    
    ofPoint pos;
    float a;
    float catchUpSpeed;
    
  };
