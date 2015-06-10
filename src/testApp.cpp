/**
 *  ofxCsv
 *  Inspired and based on Ben Fry's [table class](http://benfry.com/writing/map/Table.pde)
 *
 *  
 *  The MIT License
 *
 *  Copyright (c) 2011-2012 Paul Vollmer, http://www.wng.cc
 *  
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 *
 *  
 *  @testet_oF          0071
 *  @testet_plattform   MacOs 10.6+
 *                      ??? Win
 *                      ??? Linux
 *  @dependencies       
 *  @modified           2012.06.28
 *  @version            0.1.3
 */

#include "testApp.h"





//--------------------------------------------------------------
void testApp::setup(){
	
	// Load a CSV File.
    
    ofBackground(255, 255, 255);
	
    csvJob.loadFile(ofToDataPath("CharacterJob.csv"));
    csvTrait.loadFile(ofToDataPath("CharacterTraits.csv"));
    csvLocation.loadFile(ofToDataPath("Location.csv"));
    csvPlot.loadFile(ofToDataPath("PlotTypes.csv"));
    
    ofTrueTypeFont::setGlobalDpi(72);
    
    verdana14.loadFont("verdana.ttf", 14, true, true);
	verdana14.setLineHeight(18.0f);
	verdana14.setLetterSpacing(1.037);
    
    verdana30.loadFont("verdana.ttf", 25, true, true);
	verdana30.setLineHeight(29.0f);
	verdana30.setLetterSpacing(1.035);
    
    verdana50.loadFont("verdana.ttf", 50, true, true);
	verdana50.setLineHeight(54.0f);
	verdana50.setLetterSpacing(1.035);

  
    
    randomJobHero = ofRandom(0, csvJob.numRows);
    randomTraitHero1 = ofRandom(0, csvTrait.numRows);
    randomTraitHero2 = ofRandom(0, csvTrait.numRows);
    randomTraitHero3 = ofRandom(0, csvTrait.numRows);
    
    randomJobVillian = ofRandom(0, csvJob.numRows);
    randomTraitVillian1 = ofRandom(0, csvTrait.numRows);
    randomTraitVillian2 = ofRandom(0, csvTrait.numRows);
    randomTraitVillian3 = ofRandom(0, csvTrait.numRows);
    
    randomJobSupport = ofRandom(0, csvJob.numRows);
    randomTraitSupport1 = ofRandom(0, csvTrait.numRows);
    randomTraitSupport2 = ofRandom(0, csvTrait.numRows);
    randomTraitSupport3 = ofRandom(0, csvTrait.numRows);
    
    randomLocation = ofRandom(0, csvLocation.numRows);
    randomPlot = ofRandom(0, csvPlot.numRows);
	
  
}

//--------------------------------------------------------------
void testApp::update(){
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(0);
	ofNoFill();
    
    ofPushMatrix();
    ofTranslate(50, 20);
    verdana50.drawString("Hero", 0, 50);
    verdana30.drawString("Job: ", 0, 90);
    verdana14.drawString(csvJob.data[randomJobHero][0], 55, 90);
    verdana30.drawString("Personality:", 0, 130);
    verdana14.drawString("1. " + csvTrait.data[randomTraitHero1][0], 0, 150);
    verdana14.drawString("2. " + csvTrait.data[randomTraitHero2][0], 0, 170);
    verdana14.drawString("3. " + csvTrait.data[randomTraitHero3][0], 0, 190);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(300, 20);
    verdana50.drawString("Villian", 0, 50);
    verdana30.drawString("Job: ", 0, 90);
    verdana14.drawString(csvJob.data[randomJobVillian][0], 55, 90);
    verdana30.drawString("Personality:", 0, 130);
    verdana14.drawString("1. " + csvTrait.data[randomTraitVillian1][0], 0, 150);
    verdana14.drawString("2. " + csvTrait.data[randomTraitVillian2][0], 0, 170);
    verdana14.drawString("3. " + csvTrait.data[randomTraitVillian3][0], 0, 190);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(550, 20);
    verdana50.drawString("Support", 0, 50);
    verdana30.drawString("Job: ", 0, 90);
    verdana14.drawString(csvJob.data[randomJobSupport][0], 55, 90);
    verdana30.drawString("Personality:", 0, 130);
    verdana14.drawString("1. " + csvTrait.data[randomTraitSupport1][0], 0, 150);
    verdana14.drawString("2. " + csvTrait.data[randomTraitSupport2][0], 0, 170);
    verdana14.drawString("3. " + csvTrait.data[randomTraitSupport3][0], 0, 190);
    ofPopMatrix();
    
    verdana50.drawString("Location: ", 50, 300);
    verdana30.drawString(csvLocation.data[randomLocation][0], 300, 300);
    
    verdana50.drawString("Plot Type: ", 50, 400);
    verdana14.drawString(csvPlot.data[randomPlot][0], 350, 400);
    
    ofRect(48, 440, 204, 40);
    verdana30.drawString("Press Any Key", 50, 470);
   
    
   }

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	
    randomJobHero = ofRandom(0, csvJob.numRows);
    randomTraitHero1 = ofRandom(0, csvTrait.numRows);
    randomTraitHero2 = ofRandom(0, csvTrait.numRows);
    randomTraitHero3 = ofRandom(0, csvTrait.numRows);
    
    randomJobVillian = ofRandom(0, csvJob.numRows);
    randomTraitVillian1 = ofRandom(0, csvTrait.numRows);
    randomTraitVillian2 = ofRandom(0, csvTrait.numRows);
    randomTraitVillian3 = ofRandom(0, csvTrait.numRows);
    
    randomJobSupport = ofRandom(0, csvJob.numRows);
    randomTraitSupport1 = ofRandom(0, csvTrait.numRows);
    randomTraitSupport2 = ofRandom(0, csvTrait.numRows);
    randomTraitSupport3 = ofRandom(0, csvTrait.numRows);
    
    randomLocation = ofRandom(0, csvLocation.numRows);
    randomPlot = ofRandom(0, csvPlot.numRows);

		
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
