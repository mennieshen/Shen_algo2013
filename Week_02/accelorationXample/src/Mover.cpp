//
//  Mover.cpp
//  accelorationXample
//
//  Created by MennieShen on 13/9/3.
//
//

#include "Mover.h"

Mover::Mover(){
    
    pos = ofGetWindowSize() / 2;
    
    velocity.x = ofRandom(-5.0, 5.0);
    velocity.y = ofRandom(-5.0, 5.0);

}

void Mover::update(){
    
    accel = (mousePos - pos) * 0.01; // move towards the mouse // 0.01: cuz the number was too big = too fast so we need to slow it down
    velocity += accel;
    pos += velocity;
    velocity *= 0.97; // a little bit slow it down
    
    
}

void Mover::draw(){
    
    ofCircle(pos, 20); // bc it's a vector so we dont need pos.x / pos.y
    
}