//
//  Drop.cpp
//  algoFinal_v2
//
//  Created by MennieShen on 13/12/11.
//
//

#include "Drop.h"

Drop::Drop(){
    
    dropNoiseLevel = ofRandom(100,500);
    dropRadiusDefault = ofRandom(1,2);

    offset = 100;
    noiseOffset = ofRandom(0,20);
    
    
    c.setHsb(ofRandom(100, 140), ofRandom(200, 240), ofRandom(180, 230));
    
    trans = ofRandom(100, 150);
    
    setParams(0,0,0,0);
    damping = ofVec2f( 0.01f );
    
    
}

void Drop::setParams( float px, float py, float vx, float vy ){

    pos.set( px, py );
    vel.set( vx, vy );
}

void Drop::addForce( ofVec2f force ){
    frc += force;
}

void Drop::addDampingForce() {
    frc = frc - vel * damping;
}

void Drop::resetForces() {
    frc.set(0,0);
}


void Drop::update() {
    noiseOffset += 0.05;
    noiseOffsetOutline -= 0.002;
    
    vel = vel + frc;
    pos = pos + vel;
    
    if (dropRadius >= 50){
        
        trans *= 0.995;
            
        }
    
    
//    cout << trans << endl;
//    cout << dropRadius << endl;
}

void Drop::draw(){
    
    ofPushMatrix();
    
     ofTranslate(pos);
   
    ofBeginShape();
    
    for (int i = 0; i < 200; i++){
        float add = ofNoise(i/20.0f, noiseOffset * 3 * dropNoiseLevel / (float)ofGetWidth());
        
        dropRadius = dropRadiusDefault * noiseOffset;
        
        ofSetColor(c, trans);
        
        ofVertex((dropRadius + 5 * add * noiseOffsetOutline) * cos((i/200.0)*TWO_PI),
                 (dropRadius + 5 * add * noiseOffsetOutline) * sin((i/200.0)*TWO_PI));
        
        
        
    }
    
    ofEndShape();
    ofPopMatrix();
    
    
    

    
}