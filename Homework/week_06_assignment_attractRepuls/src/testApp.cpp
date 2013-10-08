#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
	
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
    ofBackground(0);
    
	
	
	for (int i = 0; i < 1000; i++){
		Particles myParticle;
        myParticle.setInitialCondition(ofGetWindowWidth()/2,ofGetWindowHeight()/2,0,0);
		//myParticle.setInitialCondition(ofRandom(0,1000),ofRandom(0,1000),0,0);
		// more interesting with diversity :)
		// uncomment this:
		myParticle.damping = ofRandom(0.01, 0.05);
		particles.push_back(myParticle);
	}
	
}

//--------------------------------------------------------------
void testApp::update(){
    
	// on every frame
	// we reset the forces
	// add in any forces on the particle
	// perfom damping and
	// then update
	
	
	for (int i = 0; i < particles.size(); i++){
		particles[i].resetForce();
		
		
		particles[i].addAttractionForce(mouseX, mouseY, 1000, 0.1);
		particles[i].addRepulsionForce(mouseX, mouseY, 10, 5);
		
		
        //particles[i].addCounterClockwiseForce(mouseX, mouseY, 1000, 0.1);
        //particles[i].addClockwiseForce(mouseX, mouseY, 200, 1);
		
		//particles[i].addForce(0,0.04);  // gravity
		particles[i].addDampingForce();
		particles[i].update();
	}
    
    ofColor tmpC;
    //tmpC = ofColor( , , , );
//    tmpC.r = 100.0 * ofGetElapsedTimef() * 0.05;
//    tmpC.g = 1.0 * ofGetElapsedTimef() * 0.05;
//    tmpC.b = 255.0 * ofGetElapsedTimef() * 0.05;
//    tmpC.a = 100.0 * ofGetElapsedTimef() * 0.5;
    float blah = sin(ofGetElapsedTimef()) * 10;
    tmpC.setHsb(125 + blah, 240, 240);
    tmpC.a = 100.0 * ofGetElapsedTimef() * 0.05;
    pColor.push_back(tmpC);

    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    
    ofColor semiTransparent(0, 0, 0, 255.0 * 0.03);
    
    ofSetColor(semiTransparent);
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight());
    
	//ofSetColor(0x000000);
    
    
    
    
    for(int i = 0; i < pColor.size(); i++){
        ofSetColor(pColor[i]);
    }
    
    	for (int i = 0; i < particles.size(); i++){
            
            
		particles[i].draw();
	}
    
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
    

    
    
    }

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    ofColor tmpC;
    tmpC.g = 10.0 * ofGetElapsedTimef();
    pColor.push_back(tmpC);
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
