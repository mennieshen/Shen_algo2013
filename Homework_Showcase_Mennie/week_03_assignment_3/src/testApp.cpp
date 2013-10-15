#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetBackgroundAuto(FALSE);
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);
	ofBackground(0,0,0);
	ofSetCircleResolution(100);
    
    for (int i = 0; i<1000; i++) {
      circle temp;
      temp.radius=ofRandom(ofGetWindowHeight());
      myCircle.push_back(temp);
     };
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    for(int i = 0; i < myCircle.size(); i++){
    myCircle[i].update();
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofColor semiTransparent(0, 0, 0, 255.0 * 0.03);
    ofFill();
    ofSetColor(semiTransparent);
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight());
    
    ofTranslate(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
    
    for(int i = 0; i < myCircle.size(); i++){
   
        myCircle[i].draw();
        
    
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