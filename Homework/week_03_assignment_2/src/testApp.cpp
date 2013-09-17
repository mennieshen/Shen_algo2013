#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    //ofSetBackgroundAuto(FALSE);
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);
	ofBackground(0,0,0);
	ofSetCircleResolution(100);
    
    radius = 50;
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    angle = (ofGetElapsedTimef()*5);
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    float xorig1 = ofGetWindowWidth()/2;
    float yorig1 = 200;
    
    float x1 = xorig1 + radius * sin(angle);
    float y1 = yorig1 + radius * -cos(angle);
    
    ofPoint temp1;
    temp1.x = x1;
    temp1.y = y1;
    points1.push_back(temp1);
    
    if (points1.size() > 3){
        points1.erase(points1.begin());
    }
    
    ofNoFill();
    ofSetColor(255,255,255,80);
    ofBeginShape();
    for (int i = 0; i < points1.size(); i++){
        ofVertex(points1[i].x, points1[i].y);
    }
    ofEndShape();
    
    float xorig2 = 400;
    float yorig2 = ofGetWindowHeight()/2;
    
    float x2 = xorig2 + radius * sin(angle+PI);
    float y2 = yorig2 + radius * -cos(angle+PI);
    
    ofPoint temp2;
    temp2.x = x2;
    temp2.y = y2;
    points2.push_back(temp2);
    
    if (points2.size() > 3){
        points2.erase(points2.begin());
    }
    
    ofNoFill();
    ofSetColor(255,255,255,80);
    ofBeginShape();
    for (int j = 0; j < points2.size(); j++){
        ofVertex(points2[j].x, points2[j].y);
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