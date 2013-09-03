//
//  rectangle.cpp
//  fastestNonMove
//
//  Created by MennieShen on 13/9/2.
//
//

#include "rectangle.h"
#include <iostream>

rectangle::rectangle(){
    //ofSetRectMode( OF_RECTMODE_CENTER);
}

void rectangle::update(){
    
    pos.x = pos.x += 0.001f;
    pos.y = pos.y;
    
}

void rectangle::draw(){
    
    ofSetColor(255, 0 ,255, 255);
    ofRect(pos.x, pos.y, 20, 20);
}

