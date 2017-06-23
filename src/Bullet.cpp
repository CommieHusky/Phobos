#include "Bullet.h"

Bullet::Bullet() {}

void Bullet::init(double x, double y, double radius, string path) {
	this->x = x;
	this->y = y;
	this->origin_x = x;
	this->origin_y = y;

	this->radius = radius;

	spritePath = path;
	sprite.load(spritePath);
}

void Bullet::setvelocity(double v_x, double v_y, double v_r, double v_t, double t) {
	this->v_x = v_x;
	this->v_y = v_y;
	this->v_r = v_r;
	this->v_t = v_t;
	this->t = t;
}

void Bullet::setaccel(double a_x, double a_y, double a_r, double a_t) {
	this->a_x = a_x;
	this->a_y = a_y;
	this->a_r = a_r;
	this->a_t = a_t;
}

void Bullet::draw() {
	sprite.draw(x, y);
}

void Bullet::updateC() {
	v_x += ofGetLastFrameTime() * a_x;
	v_y += ofGetLastFrameTime() * a_y;

	x += ofGetLastFrameTime() * v_x;
	y += ofGetLastFrameTime() * v_y;

}

void Bullet::updateP() {
	r = sqrt((origin_x - x) * (origin_x - x) + (origin_y - y) * (origin_y - y)); //pythagorean

	v_r += ofGetLastFrameTime() * a_r;
	v_t += ofGetLastFrameTime() * a_t;


	//x += ofGetLastFrameTime() * (v_r * cos(t) - r * sin(t) * v_t);
	//y += ofGetLastFrameTime() * (v_r * sin(t) + r * cos(t) * v_t);

	r += ofGetLastFrameTime() * v_r;
	t += ofGetLastFrameTime() * v_t;

	x = origin_x + r * cos(t);		//update coords to draw bullet at
	y = origin_y + r * sin(t);
}

void Bullet::setspawntime(double spawntime) {
	this->spawntime = spawntime;
}
