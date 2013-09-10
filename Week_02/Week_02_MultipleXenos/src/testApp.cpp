#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    
    for (int i = 0; i < 20; i++){
        
        //++i; // increment before
        Rectangle tmpRect;
        rectList.push_back(tmpRect); // push_back: pushing it onto the back --- +1+1+1+1+1... adding to your vector
        
        
    }

}

//--------------------------------------------------------------
void testApp::update(){
    
    //myRect.xenoToPoint(mousePos.x, mousePos.y);
    
    for(int i = 0; i < rectList.size(); i++){
        // here size is going to be 5 auto
        
        if(i == 0){
        rectList[i].xenoToPoint(mousePos.x, mousePos.y);
        }
        else
        {
            rectList[i].xenoToPoint(rectList[i-1].pos.x, rectList[i-1].pos.y);
        }
    
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //ofBackground(100, 100, 100, 255.0 * 0.1);
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    
    ofColor semiTransparent(100, 100, 100, 255.0 * 0.1);
    
    ofSetColor(semiTransparent);
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight());
    
    for(int i = 0; i < rectList.size(); i++){
        
        rectList[i].draw();
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
    
    mousePos.x = x;
    mousePos.y = y;

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