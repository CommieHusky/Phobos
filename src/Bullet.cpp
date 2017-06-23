#include "Bullet.h"

Bullet::Bullet() {}

void Bullet::init(double x, double y, double radius, string path) {
	this->x = x;
	this->y = y;

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


void Bullet::draw() {
	sprite.draw(x, y);
}

void Bullet::updateC() {
	x += ofGetLastFrameTime() * v_x;
	y += ofGetLastFrameTime() * v_y;

}

void Bullet::updateP() {
	double r = sqrt(x * x + y * y);

	x += ofGetLastFrameTime() * (v_r * cos(t) - r * sin(t) * v_t);
	y += ofGetLastFrameTime() * (v_r * sin(t) + r * cos(t) * v_t);
	t += ofGetLastFrameTime() * v_t;
}

void Bullet::setspawntime(double spawntime) {
	this->spawntime = spawntime;
}
