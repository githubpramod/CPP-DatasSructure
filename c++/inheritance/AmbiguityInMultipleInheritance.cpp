#include<iostream>
using namespace std;
/*
 *Odd sorts of problems may surface in certain situations involving multiple inheritance. Here’s
a common one. Two base classes have functions with the same name, while a class derived
from both base classes has no function with this name. How do objects of the derived class
access the correct base class function? The name of the function alone is insufficient, since
the compiler can’t figure out which of the two functions is meant.
 * */

class A {
	public:
		void show() { cout << "Class A\n"; }
};
class B{
	public:
		void show() { cout << "Class B\n"; }
};
class C : public A, public B {

};

int main(){
	C objC; //object of class C
	// objC.show(); //ambiguous--will not compile
	objC.A::show(); //OK
	objC.B::show(); //OK

	return 0;
}	
