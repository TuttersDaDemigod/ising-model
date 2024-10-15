#include "spin.h"
using namespace std;

Spin::Spin() {
	spin = -1;
	up = nullptr;
	down = nullptr;
	left = nullptr;
	right = nullptr;
}

Spin::Spin(int spin) {
	this->spin = spin;
	up = nullptr;
	down = nullptr;
	left = nullptr;
	right = nullptr;
}

Spin::Spin(int spin, Spin* up, Spin* down, Spin* left, Spin* right) {
	this->spin = spin;
	up = up;
	down = down;
	left = left;
	right = right;
}
Spin::~Spin() {
	/*if (up != nullptr) {
		delete up;
	}
	if (down != nullptr) {
		delete down;
	}
	if (left != nullptr) {
		delete left;
	}
	if (right != nullptr) {
		delete right;
	}*/
}
void Spin::set_spin(int spin) {
	this->spin = spin;
}

void Spin::set_up(Spin* up) {
	this->up = up;
}
void Spin::set_down(Spin* down) {
	this->down = down;
}
void Spin::set_left(Spin* left) {
	this->left = left;
}
void Spin::set_right(Spin* right) {
	this->right = right;
}
