//
//  Particles.cpp
//  week_04_assignment_fireworks
//
//  Created by MennieShen on 13/9/21.
//
//

#include "Particles.h"

void Particle::setup( ofVec2f rVel ){
    vel = rVel;
    age = 0;
    lifespan = ofRandom(50, 150);
    
    pos = ofGetWindowSize() / 2.0;
    bIsDead = false;
};

void Particle::update(){

    float noise = ofNoise(pos.x * 0.005, pos.y*0.005, ofGetElapsedTimef() * 0.1) * 15.0;

    float agePct = 1.0 - ((float)age / (float)lifespan);

    pos += ofVec2f( cos(noise), sin(noise) ) * (1.0-agePct);
    pos += vel;
    vel *= 0.97;

    age++;
    
    if( age > lifespan ) {
        bIsDead = true;
    }
};

void Particle::draw(){
    if( bIsDead ){
        return; // get out of the function
    }
    
    float agePct = 1.0 - ((float)age / (float)lifespan);
        
    
    ofCircle( pos, 4.0 * agePct  );
};


