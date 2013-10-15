#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
	ofBackground(0,0,0);
	ofSetCircleResolution(100);
    
    
    
    
}

//--------------------------------------------------------------
void testApp::update(){


    scaledTime = ofGetElapsedTimeMillis() * 0.0010;

}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    float hue;

    
    for (int i =0; i < 20; i++){
    
        
        hue = ofMap(i, 0, 20, 0, 255);
        
        ofColor c;
        c.setHsb( hue, 255, 255);
        
        angle = sin(scaledTime + i);
        
        float newAmp = ofMap(angle, -1, 1, 40, 200);
        
        float x = cos(ofDegToRad(360/20 * i)) * newAmp;
        float y = sin(ofDegToRad(360/20 * i)) * newAmp;
        
        ofPushMatrix();
        ofTranslate(ofGetWindowSize()/2);
        ofSetColor(c);
        ofCircle(x, y, 5);
        ofPopMatrix();
        
    }
    
    
    
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
