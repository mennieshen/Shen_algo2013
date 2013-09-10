//
//  Ball.cpp
//  week_02_assignment_d
//
//  Created by MennieShen on 13/9/9.
//
//

#include "Ball.h"

Ball::Ball(){
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    pos.x = -100;
    pos.y = 100;
    
    Velocity.y += 10;
    Velocity.x = ofRandom(0.0, 1.0);

    
    /*
     accelEarth:
     
     1280px = 28.6cm // my laptop
     1cm = 44.75px
     980cm = 43860px
     43860 / 60*60 (rough framerate) = 12.1 // 
     */
    
}

void Ball::update(){
    
    Velocity += accel;
    pos += Velocity;
    
    if (pos.y >= ofGetWindowHeight()-20 || pos.y <= 20){
        pos.y = ofGetWindowHeight() - 20;
        Velocity *= -0.9;
    }
       
}

void Ball::draw(){
    //ofSetColor(255, 0, 255);
    ofCircle(pos, 20);
}