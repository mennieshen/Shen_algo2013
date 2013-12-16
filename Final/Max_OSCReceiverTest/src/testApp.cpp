#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    mReceiver.setup( 30000 );
    //mSender.setup( "localhost", 12346 );
    
    pos.set( ofGetWindowSize() /2 );
    mousePos.set( ofGetWindowSize() /2 );
    
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    //checkOsc();
    // check for waiting messages
	while(mReceiver.hasWaitingMessages()){
        cout << "get" << endl;
        ofDrawBitmapStringHighlight("get", ofVec2f(50,50));
    }
    

}

void testApp::checkOsc() {

    
}
//--------------------------------------------------------------
void testApp::draw(){
    ofCircle(100,100,100);
    
        ofDrawBitmapString(ofToString(ofGetElapsedTimef()), 200, 300);
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
