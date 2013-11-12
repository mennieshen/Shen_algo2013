#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync( true );
    ofSetFrameRate( 60 );
    ofBackground(0);
    
    pos = ofGetWindowSize() / 2;
    vel = ofVec2f(10,3);
    
    mSender.setup("localhost", 12345);
    mSender2.setup("localhost", 12346);
    mSender3.setup("localhost", 12347);
    //mSender.setup("localhost", 12348);
    
}

//--------------------------------------------------------------
void testApp::update(){
    pos += vel;
    
    if (pos.x < 0 ||  pos.x > ofGetWindowWidth() * 4) {
        vel.x *= -1;
    }
    
    if (pos.y < 0 ||  pos.y > ofGetWindowHeight()) {
        vel.y *= -1;
    }
    
    ofxOscMessage m;
    m.setAddress("/ball/pos");
    m.addFloatArg(pos.x);
    m.addFloatArg(pos.y);
    
    mSender.sendMessage( m );
    mSender2.sendMessage( m );
    mSender3.sendMessage( m );
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofPushMatrix();
    //ofTranslate( -ofGetWindowWidth(), 0);
    ofSetColor(255, 255, 0);
    ofCircle(pos, 10);
    ofPopMatrix();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    mousePos.set(x,y);
    
    ofxOscMessage m;
    m.setAddress("/mouse/pos");
    m.addIntArg(mousePos.x);
    m.addIntArg(mousePos.y);
    
    mSender.sendMessage( m );
    mSender2.sendMessage( m );
    mSender3.sendMessage( m );
    
    
    
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
