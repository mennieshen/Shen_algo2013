//
//  Pokercards.cpp
//  week_06_assignment_pokerCards
//
//  Created by MennieShen on 13/10/5.
//
//

#include "Pokercards.h"

Pokercards::Pokercards(ofImage barf){
    
    mass = 1.0;
    pos = ofGetWindowSize() / 2.0;
    
    img = barf;

}

void Pokercards::applyForce(ofVec2f force){
    
    accel += (force / mass);
}

void Pokercards::update(){
    
    vel += accel;
    pos += vel;
    
    if( pos.x < 0 || pos.x > ofGetWindowWidth() ){
        vel.x = -vel.x;
    }
    if( pos.y < 0 || pos.y > ofGetWindowHeight() ){
        vel.y = -vel.y;
    }
    
    
    accel.set(0);

    
    
}

void Pokercards::draw(){
    
    img.draw(pos);
 
}