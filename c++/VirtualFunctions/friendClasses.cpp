/*
 *The member functions of a class can all be made friend s at the same time when you make the
entire class a friend .
 * */

#include<iostream>
using namespace std;

class xyz {
	private:
		int data;
	public:
		xyz() : data(100) {}
		friend class abc;
};

class abc {
	public:
		void funcA(xyz x) { cout<<"Data of class xyz in func A: "<<x.data<<endl;}
		void funcB(xyz x) { cout<<"Data of class xyz in funcB: "<<x.data<<endl;}
};

int main(int argc, char** argv) {
	xyz x;
	abc a;

	a.funcA(x);
	a.funcB(x);

	return 0;
}
