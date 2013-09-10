//
//  rectangle.cpp
//  Week_02_MultipleXenos
//
//  Created by MennieShen on 13/9/3.
//
//

//#include <iostream>

#include "rectangle.h"

Rectangle::Rectangle(){
    
    ofSetRectMode (OF_RECTMODE_CENTER);
    catchUpSpeed = 0.1;
}

void Rectangle::xenoToPoint(float catchX, float catchY){
    
    pos.x = catchUpSpeed * catchX + (1 - catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1 - catchUpSpeed) * pos.y;
    
}

void Rectangle::draw(){
    
    ofSetColor(255.0 * (pos.y / ofGetWindowHeight()), 0 ,0);
    // normalized it
    ofRect(pos.x, pos.y, 20, 20);
    
}
