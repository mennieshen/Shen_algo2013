#include "testApp.h"



/**
 *  This app is set up to receive a 'bangs' track from Duration.  It simply makes a flash of light when it gets a signal.
 *
 */

//--------------------------------------------------------------
void testApp::setup(){
    mReceiver.setup(12345);
    
    bgColor = 0;
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    checkOsc();
    
    
    bgColor *= 0.95;
}

void testApp::checkOsc() {
    
	while(mReceiver.hasWaitingMessages()){
        
		ofxOscMessage m;
        mReceiver.getNextMessage(&m);
        
        
        
        string addr = m.getAddress();
        //cout << m.getArgTypeName(10) << endl;
        //cout << "got a message " << addr << endl;
        
        if( addr == "/audio" ){
            for (int i=0; i<160; i++) {
                fft[i] = m.getArgAsFloat(i);
               // fft[i] = pow(fft[i], -0.5f);
                cout << i << ": " <<  fft[i] << endl;
            }
        }
        
        
        
        if(addr == "/bangs"){
            //do wathever
        }
       

    }
}

//--------------------------------------------------------------
void testApp::draw(){
    //ofBackground( floor( bgColor ) );
    
    ofTranslate(ofGetWindowSize()/2);
    ofSetColor (255);
    

    
    while (line.getVertices().size()>1280){
        
        line.getVertices().erase(line.getVertices().begin());
        
    }
    
    //line.getVertices().clear();
    for (int i=0; i<160; i++){
        
        int Amp = 100;
        
        
    
        float circleX = cos((TWO_PI * i)/160) * Amp * (fft[i]+1);
        float circleY = sin((TWO_PI * i)/160) * Amp * (fft[i]+1);
  
        line.getVertices().push_back( ofVec2f(circleX, circleY));
        
        
    }
    line.draw();
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
