#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetBackgroundAuto(FALSE);
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);
    ofBackground(0);
    ofSetFrameRate(60);
    
    mass = 1.0;
    num = 1;
    
    lastTime = ofGetElapsedTimef();
    timeScale = 1.0;
    
    pos = ofGetWindowSize() / 2;
    vel.set( 20, 10, 0 );
    
    mFbo.allocate( ofGetWindowWidth(), ofGetWindowHeight() );
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    dt = ofGetElapsedTimef() - lastTime;
    lastTime = ofGetElapsedTimef();

    
    vel += accel;
    pos += vel * dt * timeScale * 60;
    
    accel.set(0);
    
    if( pos.x < 100){
        vel.x *= -1;
    }
    
    if( pos.x > ofGetWindowWidth() - 100){
        
        vel.x *= -1;
    }
    
    if( pos.y < 100){
        vel.y *= -1;
    }
    
    if( pos.y > ofGetWindowHeight() - 100){
        vel.y *= -1;
    }
    
    
    scaledTime = ofGetElapsedTimeMillis() * 0.01 * dt * timeScale;
    
    
}

void testApp::applyForce( ofVec2f force ){
    
    accel += (force / mass);
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofColor semiTransparent(0, 0, 0, 255.0 * 0.3);
    ofFill();
    ofSetColor(semiTransparent);
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight());
    
    mFbo.begin();
    
    // to prevent uncleared video memory!
    ofSetColor(255, 255, 255, 0);
    ofClear(255, 255, 255, 0);
    
    ofPushMatrix();{
    ofTranslate( pos );
    ofRotate( ofGetElapsedTimef() * 0.001 * dt * timeScale);
    
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
    
    
    if ( key == 's' ){
        
        ofSaveScreen("img_" + ofToString(num) + ".png");
        num++;
    }
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
    timeScale = ofMap( x, 0, ofGetWindowWidth(), -3, 3 );

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
