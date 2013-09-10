#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){

    
   for(int i = 0; i < 20; i++){
    
    Rectangle tmpRect;
    myRects.push_back(tmpRect);
       
    myRects[i].catchUpSpeed = (i+1) * 0.03;
   }
    
    myRects[myRects.size()-1].catchUpSpeed = (1.5)*0.03f;
}

//--------------------------------------------------------------
void testApp::update(){
    
    
    for(int i = 0; i < myRects.size(); i++){
    //dist = ofDist(myRects[i].pos.x, myRects[i].pos.y, mouseX, mouseY);
    //myRects[i].a = ofMap(dist, 0, 255, 255, 0);
    myRects[i].xenoToPoint(mouseX, mouseY);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(255);
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    
    ofColor semiTransparent(100, 100, 100, 255.0 * 0.1);
    
    ofSetColor(semiTransparent);
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight());
    

    for(int i = 0; i < myRects.size(); i++){
    
      myRects[i].draw();
      
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