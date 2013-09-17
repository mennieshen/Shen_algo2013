#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofBackground(0, 0, 0);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    float angle = ofGetElapsedTimef() * 3.5;
    float radius = 200.0;
    
    float x = radius * cos(angle * 3.4); // radius = amplitude
    float y = radius * sin(angle * 4.7);
    
    
    ofPoint tmpPt;
    tmpPt.x = x;
    tmpPt.y = y;
    pointList.size().push_back(tmpPt);
    
    if(pointlist.size() > 400){
        pointList.erase(pointList.begin());
    }
    ofPushMatrix();{
        
        ofTranslate(<#float x#>, <#float y#>)
        
    }ofPopMatrix();
    
    
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