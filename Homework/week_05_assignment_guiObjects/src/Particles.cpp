//
//  Particles.cpp
//  week_05_assignment_guiObjects
//
//  Created by MennieShen on 13/9/30.
//
//

#include "Particles.h"

Particle::Particle() {
    setParams(0,0,0,0);
    damping = ofVec2f( 0.01f );
}

void Particle::setParams( float px, float py, float vx, float vy ){
    pos.set( px, py );
    vel.set( vx, vy );
}

void Particle::addForce( ofVec2f force ){
    frc += force;
}

void Particle::addDampingForce() {
    frc = frc - vel * damping;
}

void Particle::resetForces() {
    frc.set(0,0);
}

void Particle::update() {
    vel = vel + frc;
    pos = pos + vel;
}


void Particle::draw() {
    ofCircle(pos.x, pos.y, radius);
}
