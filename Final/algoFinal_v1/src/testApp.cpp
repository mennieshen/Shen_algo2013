#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(0);
    
    w = ofRandom(0,1024);
    
    myDrop.allocate( ofGetWindowWidth(),ofGetWindowHeight()  );
    

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    myDrop.begin();
    
    // to prevent uncleared video memory!
    ofSetColor(255, 255, 255, 0);
    ofClear(255, 255, 255, 0);

    
    ofPushMatrix();
    
        ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
        ofBeginShape();
    
        for (int i = 0; i < 200; i++){
            
   
            float add = ofNoise(i/20.0f, ofGetElapsedTimef() * 3 * w / (float)ofGetWidth());
            //(float)mouseX
           
            ofSetColor(255);
            ofVertex((10 * ofGetElapsedTimef() + 20 * add) * cos((i/200.0)*TWO_PI),
                     (10 * ofGetElapsedTimef() + 20 * add) * sin((i/200.0)*TWO_PI));
            
            
            
        }
    
    
        ofEndShape();
    ofPopMatrix();
    
    myDrop.end();
    
    myDrop.draw(0,0);
    myDrop.draw(200,200);
    

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
