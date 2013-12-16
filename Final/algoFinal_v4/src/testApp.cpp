#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(0);
    ofEnableAlphaBlending();
    
    //---sound setting
    soundStream.listDevices();
    
    int bufferSize = 256;
	
	left.assign(bufferSize, 0.0);
	right.assign(bufferSize, 0.0);
	volHistory.assign(400, 0.0);
	
	bufferCounter	= 0;
	drawCounter		= 0;
	smoothedVol     = 0.0;
	scaledVol		= 0.0;
    
	soundStream.setup(this, 0, 2, 44100, bufferSize, 4);
    
    //--- texture setting
    w = marble.getWidth();
    h = marble.getHeight();
    
    marble.allocate(w, h, OF_IMAGE_COLOR_ALPHA);
    marble.loadImage("Marble.jpg");
    unsigned char * imagePixels = marble.getPixels();

    myTexture.allocate(w, h, GL_RGBA);
    myTexture.loadData(imagePixels, w,h, GL_RGBA);
    //ofLoadImage(marble, "Marble.jpg");
    
    
}

void testApp::addDrop() {
    Drop myParticle;
    
    float vx = ofRandom(-4,4);
    float vy = ofRandom(-4,4);
    myParticle.setParams(300,300,vx, vy);
    dropList.push_back(myParticle);
}


//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i < dropList.size(); i++) {
        dropList[i].update();
        dropList[i].resetForces();
        dropList[i].addDampingForce();

    }
    
	scaledVol = ofMap(smoothedVol, 0.0, 0.03, 0.0, 1.0, true);
    noiseVol = ofMap(scaledVol,0.0, 0.3, 1.0, 0.0, true);
	volHistory.push_back( scaledVol );

	if( volHistory.size() >= 400 ){
		volHistory.erase(volHistory.begin(), volHistory.begin()+1);
	}
    
    

}

//-----------------------------------------------------------------
void testApp::audioIn(float * input, int bufferSize, int nChannels){
	
	float curVol = 0.0;
	int numCounted = 0;

	for (int i = 0; i < bufferSize; i++){
		left[i]		= input[i*2]*0.5;
		right[i]	= input[i*2+1]*0.5;
        
		curVol += left[i] * left[i];
		curVol += right[i] * right[i];
		numCounted+=2;
	}

	curVol /= (float)numCounted;
	curVol = sqrt( curVol );
	
	smoothedVol *= 0.93;
	smoothedVol += 0.07 * curVol;
	
	//bufferCounter++;
	
}


//--------------------------------------------------------------
void testApp::draw(){
    
    
    for (int i = 0; i < dropList.size(); i++) {
        myTexture.bind();
        dropList[i].draw();
        myTexture.unbind();
    }
    
    
     if (scaledVol > 0.8 ){
         
         for (int i = 0; i < 50; i++){
             addDrop();
         }
         
         for (int i = 0; i < dropList.size(); i++){
             
             float circVal = ofRandom(TWO_PI);
             
             float vx = cos( sin(circVal) ) * ofRandom(0,4);
             float vy = sin( sin(circVal) ) * ofRandom(0,4);
             
             dropList[i].setParams(ofGetWindowWidth()/2,ofGetWindowHeight()/2,vx, vy);
             
         }

         
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
//    Drop d;
//    dropList.push_back( d );
    
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
