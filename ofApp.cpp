#include "ofApp.h"
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup(){
	y = 0.25*ofGetHeight();
	x = 0.25f*ofGetWidth();
	/*angle = rand() % 361;
	angle = angle * PI / 180;
	dy = 10 * cos(angle);
	dx = 10 * sin(angle);*/

}

//--------------------------------------------------------------
void ofApp::update(){
	float dt = ofGetLastFrameTime();
	dy += 10.0f*dt;
	dx += 10.0f*dt;
	y += dt*dy;
	x += dt*dx;
	if (y + RADIUS > ofGetHeight()) {
		y = ofGetHeight() - RADIUS;
		dy = -dy;
	}
	if (y - RADIUS < 0) {
		y = 0 + RADIUS;
		dy = -dy;
	}
	if (x + RADIUS > ofGetWidth()) {
		x = ofGetWidth() - RADIUS;
		dx = -dx;
	}
	
	if (x - RADIUS < 0) {
		x = 0 + RADIUS;
		dx = -dx;
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofDrawCircle(x, y, RADIUS);
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
