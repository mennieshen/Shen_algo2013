//
//  Mover.h
//  accelorationXample
//
//  Created by MennieShen on 13/9/3.
//
//

#pragma once

#include "ofMain.h"

class Mover{
  
    public:
    
    Mover();
    
    void update();
    void draw();
    
    ofVec2f pos, mousePos;
    ofVec2f accel, velocity;
};