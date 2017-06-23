#include "InputHandler.h"

//--------------------------------------------------------------
/* old code, still need to update to match current code
   since we don't have anything defining PC sprites at the moment i'll leave this commented for now

Command* InputHandler::handleInput(GlobalObj& actor) {
	if (lastDirHoriz != OF_KEY_LEFT
		&& keyIsDown[OF_KEY_RIGHT] == true) {  // right horizontal and vertical checks are for key overrides

		if (!keyIsDown[OF_KEY_UP]
			&& !keyIsDown[OF_KEY_DOWN]) {
			actor.setDirection(Dir::Right);
			return cMove;
		}
		else {
			actor.setDirection(Dir::Rightdia);
			return cMove;
		}

	}
	else if (keyIsDown[OF_KEY_LEFT] == true) { // left

		if (!keyIsDown[OF_KEY_UP]
			&& !keyIsDown[OF_KEY_DOWN]) {
			actor.setDirection(Dir::Left);
			return cMove;
		}
		else {
			actor.setDirection(Dir::Leftdia);
			return cMove;
		}

	}
	if (lastDirVerti != OF_KEY_DOWN
		&& keyIsDown[OF_KEY_UP] == true) {     // up

		if (!keyIsDown[OF_KEY_LEFT]
			&& !keyIsDown[OF_KEY_RIGHT]) {
			actor.setDirection(Dir::Up);
			return cMove;
		}
		else {
			actor.setDirection(Dir::Updia);
			return cMove;
		}

	}
	else if (keyIsDown[OF_KEY_DOWN] == true) {  // down

		if (!keyIsDown[OF_KEY_LEFT]
			&& !keyIsDown[OF_KEY_RIGHT]) {
			actor.setDirection(Dir::Down);
			return cMove;
		}
		else {
			actor.setDirection(Dir::Downdia);
			return cMove;
		}

	}
	else
		return NULL;
}*/

//--------------------------------------------------------------
void InputHandler::keyPressed(int key) {
	keyIsDown[key] = true;
	switch (key) {
	case OF_KEY_RIGHT:
		lastDirHoriz = OF_KEY_RIGHT;
		break;
	case OF_KEY_LEFT:
		lastDirHoriz = OF_KEY_LEFT;
		break;
	case OF_KEY_UP:
		lastDirVerti = OF_KEY_UP;
		break;
	case OF_KEY_DOWN:
		lastDirVerti = OF_KEY_DOWN;
		break;
	}
}

//--------------------------------------------------------------
void InputHandler::keyReleased(int key) {
	keyIsDown[key] = false;

	switch (key) {
	case OF_KEY_DOWN:
		lastDirVerti = OF_KEY_UP;
		break;
	case OF_KEY_LEFT:
		lastDirHoriz = OF_KEY_RIGHT;
		break;
	}
}