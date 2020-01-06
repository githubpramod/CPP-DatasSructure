#include<iostream>
using namespace std;
/*
 *Another kind of ambiguity arises if you derive a class from two classes that are each derived
from the same class. This creates a diamond-shaped inheritance tree. The DIAMOND program
shows how this looks.
 * */
class A {
	public:
		void func();
	};
class B : public A{ 

};
class C : public A { 

};
class D : public B, public C{ 

};

int main() {
	D objD;
	objD.func(); //ambiguous: won’t compile
	
	return 0;
}
