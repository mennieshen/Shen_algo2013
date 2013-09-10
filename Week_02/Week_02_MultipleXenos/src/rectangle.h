//
//  rectangle.h
//  Week_02_MultipleXenos
//
//  Created by MennieShen on 13/9/3.
//
//

#pragma once

#include "ofMain.h"

class Rectangle {
  
    public:
    
    Rectangle(); // constructor
    
    void xenoToPoint(float catchX, float catchY);
    void draw();
     
    ofPoint pos;
    ofPoint targetPos;
    
    float catchUpSpeed;
};