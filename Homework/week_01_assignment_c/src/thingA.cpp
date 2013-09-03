//
//  thingA.cpp
//  week_01_assignment_c
//
//  Created by MennieShen on 13/9/2.
//
//

#include <iostream>
#include "thingA.h"

thingA::thingA(){
    
    ofSetRectMode( OF_RECTMODE_CENTER);
}

void thingA::update(){
    
    
    //posA.x = 100;//ofRandom(20, ofGetWindowWidth()-20);
    //posA.y = 100;//ofRandom(20, ofGetWindowHeight()-20);
   
}

void thingA::draw(){
    
    ofSetColor(55, 105, 109);
    ofRect(posA.x, posA.y, 20, 20);
    
}

