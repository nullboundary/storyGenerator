

#pragma once

#include "ofMain.h"
#include "ofxCsv.h"

using namespace wng;


class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
    ofxCsv csvJob;
    ofxCsv csvTrait;
    ofxCsv csvLocation;
    ofxCsv csvPlot;
    
    int randomJobHero;
    int randomTraitHero1;
    int randomTraitHero2;
    int randomTraitHero3;
    
    int randomJobVillian;
    int randomTraitVillian1;
    int randomTraitVillian2;
    int randomTraitVillian3;
    
    int randomJobSupport;
    int randomTraitSupport1;
    int randomTraitSupport2;
    int randomTraitSupport3;
    
    int randomLocation;
    int randomPlot;
    
    ofTrueTypeFont	verdana50;
    ofTrueTypeFont	verdana30;
    ofTrueTypeFont	verdana14;

    
		
};
