#pragma once

#include "ofMain.h"
#include "Drop.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    

        vector<Drop> dropList;
        void addDrop();
    
        //Texture
        ofImage marble;
        int w, h;
        ofTexture myTexture;

		
        //Sound
        void audioIn(float * input, int bufferSize, int nChannels);
	
        vector <float> left;
        vector <float> right;
        vector <float> volHistory;
    
        int 	bufferCounter;
        int 	drawCounter;
    
        float smoothedVol;
        float scaledVol;
        float noiseVol;
    
        ofSoundStream soundStream;
    

};
