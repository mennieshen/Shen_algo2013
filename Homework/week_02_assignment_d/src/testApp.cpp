#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){

    for(int i = 0; i < myBall.size(); i++){
    myBall[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for(int i = 0; i < myBall.size(); i++){
    
    ofSetColor(ballColor[i]);
    myBall[i].draw();
    }
    

    ofSetColor(255, 255, 255);
    ofDrawBitmapString( "Press E for Earth Gravity", ofPoint(10, 20));
    ofDrawBitmapString( "Press J for Jupiter Gravity", ofPoint(10, 40));

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    if(key == 'e'){
        activeGravity = 0;
        for(int i = 0; i < myBall.size(); i++){
            myBall[i].accel.y = accelEarth;
        }
    }
    
    if(key == 'j'){
        activeGravity = 1;
        for(int i = 0; i < myBall.size(); i++){
            myBall[i].accel.y = accelJupiter;
        }
    }

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    Ball tmpBall;
    tmpBall.pos.x = mouseX;
    tmpBall.pos.y = mouseY;
    if (activeGravity == 0) {
        tmpBall.accel.y = accelEarth;
    }
    if (activeGravity == 1) {
        tmpBall.accel.y = accelJupiter;
    }
    
    myBall.push_back(tmpBall);
    
    ofColor Bc;
    Bc.r = ofRandom(0, 255);
    Bc.g = ofRandom(0, 255);
    Bc.b = ofRandom(0, 255);
    ballColor.push_back(Bc);
    
    for(int i = 0; i < myBall.size(); i++){
        myBall[i].Velocity.x = ofRandom(0.0, 10.0);
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