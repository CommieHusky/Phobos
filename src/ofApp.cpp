#include "ofApp.h"
#include "ofMath.h"'

//in the near future we should have seperate class files for each individual pattern I think
//this pattern is in the ofApp file now just for testing purposes

//we will probably have to load patterns from seperate script files entirely

vector <Bullet> pattern;	//all bullets stored in this vector

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);		//60fps
}

//--------------------------------------------------------------
void ofApp::update(){
	ofBackground(0);

	Bullet b;
	b.init(512, 162, 0, "test_images/mentos.png");
	b.setvelocity(0, 0, ofRandom(300, 1000), 0, ofRandom(0, TWO_PI));	//random firing angle and radial velocity
	pattern.push_back(b);	//add bullet to vector

	for (int i = 0; i < pattern.size(); i++) {
		pattern[i].updateP();

		if (pattern[i].spawntime + 2 <= ofGetElapsedTimef()) {
			pattern.erase(pattern.begin() + i);							//erase bullet 2 seconds after spawn
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	for (int i = 0; i < pattern.size(); i++) {
		pattern[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
