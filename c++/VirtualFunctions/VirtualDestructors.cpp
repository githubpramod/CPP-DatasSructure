#include<iostream>
using namespace std;

/*
 *Base class destructors should always be virtual. Suppose you use delete with a base class
pointer to a derived class object to destroy the derived-class object. If the base-class destructor
is not virtual then delete , like a normal member function, calls the destructor for the base
class, not the destructor for the derived class. This will cause only the base part of the object to
be destroyed.
 * */

class Base {
	public:
		//~Base() {cout << "Base destroyed non virtual\n"; }
		virtual ~Base(){ cout << "Base destroyed\n"; }
};

class Derv : public Base {
	public:
		~Derv() { cout << "Derv destroyed\n"; }
};

int main(int argc, char** argv) {
	Base* pBase = new Derv;
	delete pBase;
	
	return 0;
}
