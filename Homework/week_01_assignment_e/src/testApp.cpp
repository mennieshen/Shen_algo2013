#include "testApp.h"

//hello git

//--------------------------------------------------------------
void testApp::setup(){

    
   for(int i = 0; i < 20; i++){ 
    rect[i].catchUpSpeed = (i+1)*0.03f;
   }
    rect[0].catchUpSpeed = (1.5)*0.03f;
}

//--------------------------------------------------------------
void testApp::update(){
    
    //ofEnableAlphaBlending();
    for(int i = 0; i < 20; i++){
    dist = ofDist(rect[i].pos.x, rect[i].pos.y, mouseX, mouseY);
    rect[i].a = ofMap(dist, 0, 255, 255, 0);
    rect[i].xenoToPoint(mouseX, mouseY);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(255);
    
    
    for(int i = 0; i < 20; i++){
      rect[i].draw();
      
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