//
//  circle.cpp
//  week_05_assignment_funSinCos
//
//  Created by MennieShen on 13/10/1.
//
//

#include "circle.h"

Circle::Circle(){
    
    radius = 20;
    pos.x = 0;
    pos.y = 0;
}

void Circle::update(){
    
}

void Circle::draw(){
    
    ofSetColor(255);
    ofCircle(pos.x, pos.y, radius);
}