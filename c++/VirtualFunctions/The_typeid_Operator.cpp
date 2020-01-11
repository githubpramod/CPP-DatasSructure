/*
 *Sometimes you want more information about an object than simple verification that it’s of a
certain class. You can obtain information about the type of an unknown object, such as its class
name, using the typeid operator.
 * */

#include<iostream>
#include<typeinfo>
using namespace std;

class Base {
	virtual void virtFunc() { }
};
class Derv1 : public Base{ 

};
class Derv2 : public Base{ 

};

void displayName(Base* pB) {
	cout << "pointer to an object of ";
	cout << typeid(*pB).name() << endl;
}

int main(int argc, char** argv) {
	Base* pBase = new Derv1;
	displayName(pBase);
	pBase = new Derv2;
	displayName(pBase);

	return 0;
}
