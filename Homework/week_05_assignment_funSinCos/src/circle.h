//
//  circle.h
//  week_05_assignment_funSinCos
//
//  Created by MennieShen on 13/10/1.
//
//

#pragma once
#include "ofMain.h"

class Circle {
  
    public:
    
    Circle();
    
    void update();
    void draw();
    
    ofVec2f pos;
    float radius;
    
};
