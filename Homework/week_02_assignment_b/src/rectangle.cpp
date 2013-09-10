//
//  rectangle.cpp
//  week_01_assignment_e
//
//  Created by MennieShen on 13/9/3.
//
//

#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(){
    
    ofSetRectMode( OF_RECTMODE_CENTER);
   
    
}




void Rectangle::draw(){

    ofEnableAlphaBlending();
    ofSetColor(255, 0 ,255);
    ofRect(pos.x, pos.y, 20, 20);
    
}

void Rectangle::xenoToPoint(float catchX, float catchY) {
    
    
    
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
}
