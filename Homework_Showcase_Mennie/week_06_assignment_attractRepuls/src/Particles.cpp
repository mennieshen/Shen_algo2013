//
//  Particles.cpp
//  week_06_assignment_attractRepuls
//
//  Created by MennieShen on 13/10/7.
//
//

#include "Particles.h"
#include "ofMain.h"


//------------------------------------------------------------
Particles::Particles(){
	setInitialCondition(0,0,0,0);
	damping = 0.09f;
}

//------------------------------------------------------------
void Particles::resetForce(){
    // we reset the forces every frame
    frc.set(0,0);
}

//------------------------------------------------------------
void Particles::addForce(float x, float y){
    // add in a force in X and Y for this frame.
    frc.x = frc.x + x;
    frc.y = frc.y + y;
}

//------------------------------------------------------------
void Particles::addDampingForce(){
	
	// the usual way to write this is  vel *= 0.99
	// basically, subtract some part of the velocity
	// damping is a force operating in the oposite direction of the
	// velocity vector
	
    frc.x = frc.x - vel.x * damping;
    frc.y = frc.y - vel.y * damping;
}


//------------------------------------------------------------
void Particles::addRepulsionForce( float px, float py, float radius, float strength){
	
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x += diff.x * pct * strength;
		frc.y += diff.y * pct * strength;
	}
	
}

//------------------------------------------------------------
void Particles::addAttractionForce( float px, float py, float radius, float strength){
	
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x -= diff.x * pct * strength;
		frc.y -= diff.y * pct * strength;
	}
	
}


//------------------------------------------------------------
void Particles::addClockwiseForce( float px, float py, float radius, float strength){
	
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	


    
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x -= diff.y * pct * strength;
		frc.y += diff.x * pct * strength;
	}
	
}

//------------------------------------------------------------
void Particles::addCounterClockwiseForce( float px, float py, float radius, float strength){
	
	
    ofColor tmpForceC;
    float blah2 = sin(ofGetElapsedTimef()) * 10;
    tmpForceC.setHsb(240, 125 + blah2, 240);
    tmpForceC.a = 100.0 * ofGetElapsedTimef() * 0.05;
    clockForceColor.push_back(tmpForceC);
    
    for(int j = 0; j < clockForceColor.size(); j++){
        ofSetColor(clockForceColor[j]);
    }
    
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x += diff.y * pct * strength;
		frc.y -= diff.x * pct * strength;
	}
	
}





//------------------------------------------------------------
void Particles::setInitialCondition(float px, float py, float vx, float vy){
    pos.set(px,py);
	vel.set(vx,vy);
    
    
}

//------------------------------------------------------------
void Particles::update( ofVec2f circleCenter, float circleRadius){
	vel = vel + frc;
	pos = pos + vel;
    
    if( pos.distance(circleCenter) > circleRadius ){
        ofVec2f tmpPos = pos - circleCenter;
        pos = tmpPos.normalized() * circleRadius + circleCenter;
        
        ofVec2f circleNormal( tmpPos.x, tmpPos.y );
        float twiceProjFactor = 2.0 * vel.dot( circleNormal ) / (circleRadius * circleRadius);
        ofVec2f velBounced = vel - ofVec2f(twiceProjFactor, twiceProjFactor) * tmpPos;
        vel.set( velBounced );
    }

    

}

//------------------------------------------------------------
void Particles::draw(){
    //ofSetColor(255);
        
    ofCircle(pos.x, pos.y, 1);
}

