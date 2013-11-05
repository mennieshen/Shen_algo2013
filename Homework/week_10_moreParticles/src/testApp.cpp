#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetBackgroundAuto(FALSE);
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);
    ofBackground(0);
    
    pos = ofGetWindowSize() / 2;
    vel.set( 20, 10, 0 );
    
    mFbo.allocate( ofGetWindowWidth(), ofGetWindowHeight() );
    
}

//--------------------------------------------------------------
void testApp::update(){
    pos += vel;
    
    if( pos.x < 0 || pos.x > ofGetWindowWidth() ){
        vel.x *= -1;
    }
    
    if( pos.y < 0 || pos.y > ofGetWindowHeight() ){
        vel.y *= -1;
    }
    
    scaledTime = ofGetElapsedTimeMillis() * 0.0001;
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofColor semiTransparent(0, 0, 0, 255.0 * 0.003);
    ofFill();
    ofSetColor(semiTransparent);
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight());
    
    mFbo.begin();
    
    // to prevent uncleared video memory!
    ofSetColor(255, 255, 255, 0);
    ofClear(255, 255, 255, 0);
    
    ofPushMatrix();{
    ofTranslate( pos );
    ofRotate( ofGetElapsedTimeMillis() * 0.001);
    
    float hue;
    
    for (int i =0; i < 40; i++){
        
        
        hue = ofMap(i, 0, 40, 0, 255);
        
        ofColor c;
        c.setHsb( hue, 255, 255);
        
        angle = sin(scaledTime + i);
        
        float newAmp = ofMap(angle, -1, 1, 40, 200);
        
        float x = cos(ofDegToRad(360/40 * i)) * newAmp;
        float y = sin(ofDegToRad(360/40 * i)) * newAmp;
        
        ofPushMatrix();
        ofSetColor(c);
        ofCircle(x, y, 1);
        ofPopMatrix();
        
    }
    }ofPopMatrix();
    
    mFbo.end();
    
    ofSetColor(255);
    mFbo.draw(0,0);
    mFbo.draw(0,100);
    mFbo.draw(100,100);
    mFbo.draw(100,0);
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
