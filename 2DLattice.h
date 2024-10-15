#include "Spin.h"

using namespace std;

class TwoDLattice {
	public:
		TwoDLattice(int width, int length);
		~TwoDLattice();
		Spin *head;
	private:
		int width;
		int length;

};
