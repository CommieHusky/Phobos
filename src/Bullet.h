#pragma once

#include "ofMain.h"
#include "ofxThreadedImageLoader.h"

class Bullet {

	

	public:

		Bullet();

		////multithreading attempt: commence

		//void init(double x, double y, double v_x, double v_y, double radius, string path) {
		//	this->x = x;
		//	this->y = y;
		//	this->v_x = v_x;
		//	this->v_y = v_y;		

		//	this->radius = radius;

		//	spritePath = path;
		//	loader.loadFromDisk(sprite, spritePath);
		//}

		//void draw() {
		//	sprite.draw(x, y);
		//}

		//void update() {
		//	x += ofGetLastFrameTime() * v_x;
		//	y += ofGetLastFrameTime() * v_y;

		//	//to add player collision checking here

		//	printf("%f, %f \n", x, y);
		//}

		/*void threadedFunction() {
			sprite.load(spritePath);

			for (int i = 0; i < 120; i++) {
				update();
				draw();
			}
		}*/

		string spritePath;	//sprite image file path
		ofImage sprite;

		double origin_x, origin_y; //polar origin coordinates
		double x, y;		//position
		double v_x, v_y;	//cartesian velocity
		double v_r, v_t;	//polar velocity
		double a_x, a_y;
		double a_r, a_t;
		double r;			//radial position from origin
		double t;			//firing angle (for polar defined patterns)

		double radius;		//hitbox radius

		double spawntime;	//time of bullet spawn (s)

		void init(double x, double y, double radius, string path);
		void setvelocity(double v_x, double v_y, double v_r, double v_t, double t);
		void setaccel(double a_x, double a_y, double a_r, double a_t);
		void updateC();
		void updateP();
		void draw();
		void setspawntime(double spawntime);

};
