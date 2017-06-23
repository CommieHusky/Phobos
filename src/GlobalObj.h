#pragma once

enum class Init {
	Act,
	Other
};

class GlobalObj {
public:
	void init(Init type);
	void act();
};