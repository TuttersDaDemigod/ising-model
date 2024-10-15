#include<vector>
using namespace std;

class Spin {
	public:
		Spin();
		Spin(int spin);
		Spin(int spin, Spin* up, Spin* down, Spin* left, Spin* right);
		~Spin();
		void set_spin(int spin);
		void set_up(Spin* up);
		void set_down(Spin* down);
		void set_left(Spin* left);
		void set_right(Spin* right);
		int spin;
       		Spin* up;
		Spin* down;
		Spin* left;
		Spin* right;		
};
