#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    myImage.loadImage("mennie.jpg");
    
    int xRes = floor( myImage.getWidth() / 3.0  );
    int yRes = floor( myImage.getHeight() / 3.0 );
    
    for( int y=0; y<yRes; y++ ){
        for( int x=0; x<xRes; x++ ){
            addParticle( x, y );
        }
    }
    
    ofBackground(0);
}

//--------------------------------------------------------------

void testApp::addParticle(float x, float y) {
    float xPos = ( x + 0.5f ) * 4.0f;
    float yPos = ( y + 0.5f ) * 4.0f;
    
    particleList.push_back( Particle( ofVec2f( xPos, yPos ) ) );
}

//--------------------------------------------------------------
void testApp::update(){
    
    for( int i=0; i<particleList.size(); i++ ){
        particleList[i].update( myImage );
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //myImage.draw(0, 0);
    
    for( int i=0; i<particleList.size(); i++ ){
        particleList[i].draw();
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
