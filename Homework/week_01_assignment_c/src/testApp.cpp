#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    thingA.update();
    thingB.update();
 

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(255);
    thingA.draw();
    thingB.draw();
    
    
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
    
    if(click == true){
        thingA.posA.x = mouseX;
        thingA.posA.y = mouseY;
        click = !click;
    }
    else
    {
        thingB.posB.x = mouseX;
        thingB.posB.y = mouseY;
        click = !click;
    }
        
    
    
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