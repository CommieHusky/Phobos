#pragma once
#include "Command.h"
#include "ofMain.h"

//--------------------------------------------------------------
class InputHandler : public ofBaseApp {
public:
	Command* handleInput(GlobalObj& actor);

	void keyPressed(int key);
	void keyReleased(int key);


private:
	Command* cMove = new ActionCommand();

	int lastDirHoriz = 0;
	int lastDirVerti = 0;
	bool keyIsDown[255];

};