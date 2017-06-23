#pragma once

#include "ofMain.h"

class Bullet {

	

	public:

		Bullet();

		string spritePath;	//sprite image file path
		ofImage sprite;

		double origin_x = 0, origin_y = 0; //polar origin coordinates
		double x = 0, y = 0;		//position
		double v_x = 0, v_y = 0;	//cartesian velocity
		double v_r = 0, v_t = 0;	//polar velocity
		double a_x = 0, a_y = 0;	//cartesian acceleration
		double a_r = 0, a_t = 0;	//polar acceleration
		double r = 0;			//radial position from origin
		double t = 0;			//angle from positive x-axis going counterclockwise

		double radius;		//hitbox radius

		double spawntime;	//time of bullet spawn (s)

		void init(double radius, string path);
		void setorigin(double origin_x, double origin_y);
		void setpos(double x, double y, double r, double t);
		void setvelocity(double v_x, double v_y, double v_r, double v_t);
		void setaccel(double a_x, double a_y, double a_r, double a_t);
		void updateC();		//update cartesian
		void updateP();		//update polar
		void draw();
		void setspawntime(double spawntime);

};
