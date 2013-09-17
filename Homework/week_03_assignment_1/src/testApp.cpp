#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
	ofBackground(0,0,0);
	ofSetCircleResolution(100);
  
    
}

//--------------------------------------------------------------
void testApp::update(){
    angle = (ofGetElapsedTimef()*2);
    
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    
        
    ofTranslate(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
   
    
    float x = 100 * -sin(angle);
    float y = 50 * -sin(angle*(2));
    
    
    
    
    ofPoint temp;
    temp.x = x;
    temp.y = y;
    points.push_back(temp);
    
    if (points.size()>80){
        points.erase(points.begin());
    }
    
    ofNoFill();
    ofSetColor(180);
    
    int steps = 16;
    float angleX = (float)360/steps;
    
    for (int i =0; i<steps; i++) {
    
        ofPushMatrix();
        ofRotate((angleX*i));
        ofTranslate(200, 0);
        ofSetColor(200,200,i*15);
        ofBeginShape();
        
        for (int i = 0; i < points.size(); i++){
            
            ofVertex(points[i].x, points[i].y);
            
        }
        
        ofEndShape();
        ofPopMatrix();
        
        //+(cos(angle+i)*20)
    }
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