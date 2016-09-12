#pragma once

#include "ofMain.h"
#define PI 3.14159265
class ofApp : public ofBaseApp{

	private:
		const float RADIUS = 60.0f;
		float x = 0;
		float y = 0;
		float dy = 0;
		float dx = 0;
		int angle = 0;

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
