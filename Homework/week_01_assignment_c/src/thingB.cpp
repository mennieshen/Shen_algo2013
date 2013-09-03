//
//  thingB.cpp
//  week_01_assignment_c
//
//  Created by MennieShen on 13/9/2.
//
//


#include <iostream>
#include "thingB.h"

thingB::thingB(){
    
 
}

void thingB::update(){
    
    
    //posB.x = 100;//ofRandom(20, ofGetWindowWidth()-20);
    //posB.y = 100;//ofRandom(20, ofGetWindowHeight()-20);
    
}

void thingB::draw(){
    
    ofSetColor(203, 27, 69);
    ofCircle(posB.x, posB.y, 10);
    
}
