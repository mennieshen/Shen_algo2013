//
//  Particle.cpp
//  week05_assignment_imageParticle
//
//  Created by MennieShen on 13/9/30.
//
//

#include "Particle.h"

Particle::Particle( ofVec2f position ) {
    pos = position;
    //radius = 6;
    rValue = 255;
    gValue = 255;
    bValue = 255;

}

void Particle::update(const ofImage &img){
    
    rValue = img.getColor( pos.x, pos.y * ofRandom(-2,2)).r;
    gValue = img.getColor( pos.x, pos.y).g;
    bValue = img.getColor( pos.x, pos.y * ofRandom(-2,2)).b;
   
    radius = ((float)bValue / 255.0) * 5.0;

}

void Particle::draw() {
    
        ofSetColor( rValue, gValue, bValue );
    //ofSetColor(255);
    ofRect( pos, radius, radius );
}