#include <iostream>
using namespace std;

class counter {

	private:
		unsigned int count;
	public:
		counter(unsigned int val = 0) : count(val) {}
		unsigned int getCount() const {return count;}
		counter operator ++() {
			++count;
			return counter(count);
		}
};

int main (int argc, char** argv) {
	counter c1,c2,c3,c4;
	++c1;
	++c2;
	++c2;
//	c3++;
	c4 = ++c1;
	cout <<"C1 INcreamented "<<c1.getCount()<<endl;
	cout <<"C2 INcreamented "<<c2.getCount()<<endl;
//	cout <<"C3 Increamented "<<c3.getCount()<<endl;
	cout <<"C4 assignement and incremented "<<c4.getCount()<<endl;
	return 0;
}
