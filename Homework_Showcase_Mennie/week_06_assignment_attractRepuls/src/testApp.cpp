#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
	
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
    ofBackground(0);
    ofSetCircleResolution(100);
    ofEnableSmoothing();
    
    circleCenter = ofGetWindowSize() / 2;
    circleRadius = 250;
    
    addParticle();
    
	
	
	for (int i = 0; i < 1000; i++){
		Particles myParticle;
        //myParticle.setInitialCondition(ofGetWindowWidth()/2,ofGetWindowHeight()/2,0,0);
		myParticle.setInitialCondition(ofRandom(0,1000),ofRandom(0,1000),0,0);
		// more interesting with diversity :)
		// uncomment this:
		myParticle.damping = ofRandom(0.01, 0.05);
		particles.push_back(myParticle);
	}
    
    for (int i = 0; i < 3000; i++){
		Particles myParticle2;
        myParticle2.setInitialCondition(ofGetWindowWidth()/2,ofGetWindowHeight()/2,0,0);
	
		myParticle2.damping = ofRandom(0.01, 0.05);
		particles2.push_back(myParticle2);
	}
	
}

void testApp::addParticle() {
    Particles p;
    p.pos = ofVec2f( circleCenter - ofVec2f(-50,20) );
    p.vel = ofVec2f( ofRandom(-5,5), ofRandom(-5,5) );
    
    particleList.push_back( p );
}


//--------------------------------------------------------------
void testApp::update(){
    

	
	for (int i = 0; i < particles.size(); i++){
		particles[i].resetForce();
		
		
		particles[i].addAttractionForce(mouseX, mouseY, 1000, 0.1);
		particles[i].addRepulsionForce(mouseX, mouseY, 300, 1);
		
		if ( addForceSwitch == true){
        //particles[i].addCounterClockwiseForce(mouseX, mouseY, 1000, 1);
        //particles[i].addClockwiseForce(mouseX, mouseY, 1000, 1);
        }
        //particles[i].addClockwiseForce(mouseX, mouseY, 200, 1);
		
		//particles[i].addForce(0,0.04);  // gravity
		particles[i].addDampingForce();
		particles[i].update( circleCenter, circleRadius);
        
	}
    
    for (int i = 0; i < particles2.size(); i++){
		particles2[i].resetForce();
		
		particles2[i].addAttractionForce(mouseX, mouseY, 1000, 0.1);
		particles2[i].addRepulsionForce(mouseX, mouseY, 50, 3);
		
		if ( addForceSwitch == true){
            particles2[i].addCounterClockwiseForce(mouseX, mouseY, 1000, 10);
            particles2[i].addClockwiseForce(mouseX, mouseY, 1000, 10);
        }
        //particles[i].addClockwiseForce(mouseX, mouseY, 200, 1);
		
		//particles[i].addForce(0,0.04);  // gravity
		particles2[i].addDampingForce();
		particles2[i].update( circleCenter, circleRadius);
        
	}

    
    for( int i=0; i<particleList.size(); i++ ){
        particleList[i].update( circleCenter, circleRadius );
    }
    
    ofColor tmpC;
    float blah = sin(ofGetElapsedTimef()) * 10;
    tmpC.setHsb(125 + blah, 240, 240);
    tmpC.a = 100.0 * ofGetElapsedTimef();
    pColor.push_back(tmpC);
    
    ofColor tmpC2;
    float blah2 = sin(ofGetElapsedTimef()) * 10;
    tmpC2.setHsb(150, 240, 125 + blah2);
    tmpC2.a = 100.0 * ofGetElapsedTimef();
    pColor2.push_back(tmpC2);
    
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    
    ofColor semiTransparent(0, 0, 0, 255.0 * 0.03);
    
    ofSetColor(semiTransparent);
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight());
    
    for(int i = 0; i < pColor.size(); i++){
        ofSetColor(pColor[i]);
    }
    
    	for (int i = 0; i < particles.size(); i++){
		particles[i].draw();
	}
    
    for(int i = 0; i < pColor2.size(); i++){
        ofSetColor(pColor2[i]);
    }
    
    for (int i = 0; i < particles2.size(); i++){
		particles2[i].draw();
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
    
     //addParticle();
    

    
    if ( x == mouseX || y == mouseY){
        
        addForceSwitch == true;
    
        }
    else{
        
        addForceSwitch == false;
        
    }
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
