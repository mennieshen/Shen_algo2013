#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(0);
    
    gui = new ofxUICanvas(0, 0, 200, 500);
    gui->addSpacer();
    gui->addLabel("Particle Controller");
    gui->addSpacer();
    
    //gui->addButton("myButton", false, 40, 40);
    gui->addCircleSlider("Particle Radius", 1, 20, 5, 150);
    gui->addSpacer();
    
    gui->addLabel("Color Controller");
    gui->addSpacer();
    gui->addSlider("R", 0, 255, 1, 150, 30);
    gui->addSlider("G", 0, 255, 1, 150, 30);
    gui->addSlider("B", 0, 255, 1, 150, 30);
    gui->addSpacer();
    
    gui->addLabel("Numbers");
    gui->addSpacer();
    gui->addSlider("N", 1, 10, 1, 150, 30);
    gui->addSpacer();
    
    gui->loadSettings("myGuiSettings.xml");
    
    ofAddListener(gui->newGUIEvent, this, &testApp::onGuiEvent);
    
//    for (int i = 0; i < 1000; i++){
//        addParticle();
//    }
    
    r = 255;
    g = 255;
    b = 255;
    
    particleNumber = ofRandom(1,10);

}

//--------------------------------------------------------------
void testApp::exit(){
    
    gui->saveSettings("myGuiSettings.xml");
    delete gui;
    
}

//--------------------------------------------------------------
void testApp::onGuiEvent(ofxUIEventArgs &e){
    
    
    // particle size
    if(e.getName() == "Particle Radius"){
        ofxUICircleSlider *radiusSlider = (ofxUICircleSlider*)e.widget;
        cout << radiusSlider->getScaledValue() << endl;
        //radius = radiusSlider->getScaledValue();
        for (int i=0; i < particleList.size(); i++){
        particleList[i].radius = radiusSlider->getScaledValue();
        }

    }
    
    if(e.getName() == "R"){
        ofxUISlider *red = (ofxUISlider*)e.widget;
        r = red->getScaledValue();
        
    }
    
    if(e.getName() == "G"){
        ofxUISlider *green = (ofxUISlider*)e.widget;
            g = green->getScaledValue();
        
    }
    
    if(e.getName() == "B"){
        ofxUISlider *blue = (ofxUISlider*)e.widget;
            b = blue->getScaledValue();
    }
    
    if(e.getName() == "N"){
        ofxUISlider *n = (ofxUISlider*)e.widget;
        particleNumber = n->getScaledValue();
        
    }

    
}
//--------------------------------------------------------------
void testApp::update(){
    
    for (int i=0; i < particleList.size(); i++){
		particleList[i].resetForces();
        particleList[i].addForce( ofVec2f(0,0.04));  // gravity
		particleList[i].addDampingForce();
		particleList[i].update();
	}

    
}

//--------------------------------------------------------------
void testApp::draw(){

    
    ofSetColor(r, g, b);
    //ofCircle(ofGetWindowSize()/2, radius);
    for (int i=0; i < particleList.size(); i++){
        
        particleList[i].draw();
        
    }

    
    
}

void testApp::addParticle(float x, float y) {
    Particle myParticle;
    
    float particleV = ofRandom(TWO_PI);
    
    float vx = cos(particleV)*ofRandom(0,4);
    float vy = sin(particleV)*ofRandom(0,4);
    //float x = ofRandom(ofGetWindowWidth());
    //float y = ofRandom(ofGetWindowHeight());
    
    myParticle.setParams(x, y, vx, vy);
    
    // more interesting with diversity :)
    // uncomment this:
    //		myParticle.damping = ofRandom(0.01, 0.05);
    particleList.push_back(myParticle);
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
   
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    
    for (int i = 0; i < particleNumber; i++){
        
        float randX = ofRandom(ofGetWindowWidth());
        float randY = ofRandom(ofGetWindowHeight());
        
        for (int j = 0; j < 100; j++){
            
            addParticle(randX, randY);
        
        }
        
    }


    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}
