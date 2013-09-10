//
//  circle.cpp
//  week_02_assignment_c
//
//  Created by MennieShen on 13/9/9.
//
//

#include "circle.h"

Circle::Circle(){
    
    /*
    pos.x = ofGetWindowWidth() / 2;
    pos.y = ofGetWindowHeight() / 2;
     */
    
    catchUpSpeed = 0.09f;
    
}

void Circle::update(){
    
    circleSize = ofRandom(1, 10);

}

void Circle::draw(){
    
    ofCircle(pos, circleSize);
    
    
}

void Circle::xenoToPoint(float catchX, float catchY){
    
    pos.x = catchX * catchUpSpeed + pos.x * (1 - catchUpSpeed);
    pos.y = catchY * catchUpSpeed + pos.y * (1 - catchUpSpeed);
    
}