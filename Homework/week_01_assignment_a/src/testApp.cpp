#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    
    //rect.pos.x = ofGetWindowWidth() / 2;
    rect.pos.y = ofGetWindowHeight() / 2;
    
}

//--------------------------------------------------------------
void testApp::update(){
    rect.update();
    
    0.001f * ofGetFrameRate();
    
}

//--------------------------------------------------------------
void testApp::draw(){
    rect.draw();
    
    ofSetColor(255, 255, 255);
    ofDrawBitmapString( "Rect Position:", ofPoint(10, 20));
    ofDrawBitmapString(ofToString(rect.pos.x), ofPoint(140, 20));
    ofDrawBitmapString( "px/sec:", ofPoint(10, 40));
    ofDrawBitmapString(ofToString(0.001f * ofGetFrameRate()), ofPoint(140, 40));
    ofDrawBitmapString( "cm/sec:", ofPoint(10, 60));
    ofDrawBitmapString(ofToString((0.001f * ofGetFrameRate()) * (28.6 / 1280)), ofPoint(140, 60));
    
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
