#pragma once
#include "GlobalObj.h"
#include "InputHandler.h"
#include "ofApp.h"

//--------------------------------------------------------------

class Command {
public:
	virtual ~Command() {}
	virtual void execute(GlobalObj& obj) = 0;

};

//--------------------------------------------------------------

class ActionCommand : public Command {
public:
	virtual void execute(GlobalObj& obj) {
		obj.init(Init::Act);
	}

};