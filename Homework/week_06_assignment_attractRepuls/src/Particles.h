//
//  Particles.h
//  week_06_assignment_attractRepuls
//
//  Created by MennieShen on 13/10/7.
//
//

#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"

class Particles
{
public:
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;
    
    Particles();
    virtual ~Particles(){};
    
    void resetForce();
    void addForce(float x, float y);
    void addDampingForce();
    void setInitialCondition(float px, float py, float vx, float vy);
    void update();
    void draw();
	
    void addRepulsionForce( float px, float py, float radius, float strength);
    void addAttractionForce( float px, float py, float radius, float strength);
    void addClockwiseForce( float px, float py, float radius, float strength);
    void addCounterClockwiseForce( float px, float py, float radius, float strength);
	
	
    float damping;
    
    vector<ofColor> clockForceColor;
    
    
    
protected:
private:
};

#endif