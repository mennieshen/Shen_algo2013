#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
	ofBackground(0,0,0);
	ofSetCircleResolution(100);
    
    circleNumber = 18;
    
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    //angle = (ofGetElapsedTimef()*2);


}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofTranslate(ofGetWindowSize()/2);
    
    
    angle = 360 / circleNumber;
    
    
    Circle tmpC;
    tmpC.pos.x = cos(ofRadToDeg(angle))*20;
    tmpC.pos.y = sin(ofRadToDeg(angle))*20;
    myCircles.push_back(tmpC);

    
    for(int i = 0; i < circleNumber; i++){
        
        myCircles[i].pos.x =
    
        myCircles[i].draw();
        
        
        
       
    
    }
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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
