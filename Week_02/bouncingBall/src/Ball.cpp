//
//  Ball.cpp
//  bouncingBall
//
//  Created by MennieShen on 13/9/3.
//
//

#include "Ball.h"

Ball::Ball(){
    
    ofSeedRandom();
    
    xVelocity = ofRandom(0.0, 1.0);
    yVelocity = ofRandom(0.0, 1.0);
    
    pos.x = ofGetWindowWidth() / 2;
    pos.y = ofGetWindowWidth() / 2;
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
}

void Ball::update(){
    
    pos.x += xVelocity * 10.0; // bc xVelovity is too slow
    pos.y += yVelocity * 10.0;
    
    if (pos.x < 0 || pos.x > ofGetWindowWidth() - 10){
        
        xVelocity *= -1;
            }
    
    if (pos.y < 0 || pos.y > ofGetWindowHeight() - 10){

        yVelocity *= -1;
    }

}

void Ball::draw(){
    ofSetColor(255, 0, 255);
    ofCircle(pos.x, pos.y, 20);
}