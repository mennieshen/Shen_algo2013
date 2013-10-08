#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground( 0 );
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();

    // vector of holding poker imgs
    for (int i = 1; i < 53; i++){
        
        ofImage tmpImg;
        tmpImg.loadImage("classic-cards/" + ofToString(i) + ".png");
        pokerImgs.push_back(tmpImg);
    }
    

}

//--------------------------------------------------------------
void testApp::update(){
    
    ofVec2f gravity( 0.0, 0.1);
    ofVec2f wind( 0.1, 0.0);
    
    for( int j=0; j<myCards.size(); j++){
        //        mParticleList[i].applyForce( gravity );
        myCards[j].applyForce( gravity * myCards[j].mass );
        
        //        mParticleList[i].applyForce( wind );
        //        mParticleList[i].applyForce( ofVec2f(ofRandom(-3,3), 0) );
        myCards[j].applyForce( ofVec2f( ofNoise(myCards[j].pos.y) - 0.5, 0) );
        
        myCards[j].update();
    }

    


}

//--------------------------------------------------------------
void testApp::draw(){

      for( int j=0; j<myCards.size(); j++){
          myCards[j].draw();
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
    
//    ofTranslate(ofGetWindowSize() / 2);
//    
//    for (int i = 1; i < 53; i++){
//        
//        int randNumber = ofRandom(1,52);
//        pokerImgs[randNumber].draw(0,0);
//        
//    }
    
//    for( int j=0; j<myCards.size(); j++){
    
    int rand = ofRandom(52);

        Pokercards tmp(pokerImgs[rand]);
        myCards.push_back(tmp);
    
    for(int j = 0; j < myCards.size(); j++){
        
        myCards[j].pos.x = x;
        myCards[j].pos.y = y;
    }
    
 //   }

    
    
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
