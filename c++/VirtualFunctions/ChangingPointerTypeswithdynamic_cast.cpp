/*
 *The dynamic_cast operator allows you to cast upward and downward in the inheritance tree.
However, it allows such casting only in limited ways.
 * 
 * In an upcast you attempt to change a derived-class object into a base-class object. What you
get is the base part of the derived class object. In the example we make an object of class Derv .
The base class part of this object holds member data ba , which has a value of 21, and the
derived part holds data member da , which has the value 22. After the cast, pBase points to the
base-class part of this Derv class object, so when called upon to display itself, it prints Base:
ba=21 . Upcasts are fine if all you want is the base part of the object.
In a downcast we put a derived class object, which is pointed to by a base-class pointer, into a
derived-class pointer.
 * */

#include<iostream>
#include<typeinfo>
using namespace std;

class Base {
	protected:
		int ba;
	public:
		Base() : ba(0) { }
		Base(int b) : ba(b) { }
		virtual void vertFunc() //needed for dynamic_cast
		{ }
		void show()
			{ cout << "Base: ba=" << ba << endl; }
};

class Derv : public Base {
	private:
		int da;
	public:
		Derv(int b, int d) : da(d)
			{ ba = b; }
		void show()
			{ cout << "Derv: ba=" << ba << ", da=" << da << endl; }
};

int main(int argc, char** argv) {
	Base* pBase = new Base(10);
	Derv* pDerv = new Derv(21, 22);
	//derived-to-base: upcast -- points to Base subobject of Derv
	pBase = dynamic_cast<Base*>(pDerv);
	pBase->show();

	pBase = new Derv(31, 32);
	//base-to-derived: downcast -- (pBase must point to a Derv)
	pDerv = dynamic_cast<Derv*>(pBase);
	pDerv->show();

	return 0;
}
