#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    //ofBackground(0,0,0);
    //ofSetFrameRate(150);
    ofSetCircleResolution(100);
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();

  
}

//--------------------------------------------------------------
void testApp::update(){
    
    
    myCirclesM.xenoToPoint(mouseX, mouseY);
   
     

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    
    ofColor semiTransparent(100, 100, 100, 255.0 * 0.01);
    
    ofSetColor(semiTransparent);
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight());
     
    
    //ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    
    for(int i = 0; i < color1.size(); i++){
    ofSetColor(color1[i]);
    }
     
    
    myCirclesM.draw();
    
    

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
    
    ofColor c1;
    c1.r = ofRandomf() * 100.0;
    c1.g = ofRandomf() * 1.0;
    c1.b = ofRandomf() * 255.0;
    color1.push_back(c1);


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