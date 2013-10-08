//
//  Pokercards.h
//  week_06_assignment_pokerCards
//
//  Created by MennieShen on 13/10/5.
//
//

#pragma once
#include "ofMain.h"

class Pokercards {
    
    public:
    
    Pokercards(ofImage barf);
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f accel;
    float mass;
    
    void applyForce( ofVec2f force );
    void update();
    void draw();
    
    ofImage img;
    
    
    
};
