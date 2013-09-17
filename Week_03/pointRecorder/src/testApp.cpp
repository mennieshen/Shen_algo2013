#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofBackground(0);

}

//--------------------------------------------------------------
void testApp::update(){
    
    

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofNoFill();
    ofSetColor(255, 255, 255);
    
    ofBeginShape();
    
    for(int i = 0; i < pointList.size(); i++){
        ofVertex(pointList[i]);
    }
    
    ofEndShape();

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
    ofPoint tmpPt;
    tmpPt.x = x;
    tmpPt.y = y;
    
    pointList.push_back(tmpPt);

    if(pointList.size() > 50){
        
        pointList.erase(pointList.begin()); // iterator: a pointer to pose memory // being|end in memory
    }
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