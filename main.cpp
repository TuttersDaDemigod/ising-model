#include "2DLattice.h"
#include<iostream>
using namespace std;

int main() {
	int width = 5;
	int length = 1;
	TwoDLattice *lattice = new TwoDLattice(width, length);
	for (int i = 0; i < width + 2; ++i) {
		cout << lattice->head->spin << endl;
		lattice->head = lattice->head->right;
	}
	
	lattice->~TwoDLattice();
	return 0;
}
