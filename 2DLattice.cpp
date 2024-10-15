#include "2DLattice.h"
#include<iostream>
using namespace std;

TwoDLattice::TwoDLattice(int width, int length) {
	this->width = width;
	this->length = length;
	head = new Spin();
	Spin *pHead = head;
	cout << "Beginning initialization" << endl;
	for (int i = 0; i < width - 1; ++i) {
		if (i % 2 == 0) {
			pHead->right = new Spin(1);
		} else {
			pHead->right = new Spin();
		}
		Spin *tmp = pHead;
		pHead = pHead->right;
		pHead->left = tmp;
		if (i == width - 2) {
			head->left = pHead;
			pHead->right = head;
		}
	}
}

TwoDLattice::~TwoDLattice() {
	while (head != nullptr) {
		//cout << "Here" << endl;
		Spin *rear = head;
		//cout << "Here2" << endl;
		head = head->right;
		delete rear;
		//cout << "Here3" << endl;
		//cout << head << endl;
	}
}
