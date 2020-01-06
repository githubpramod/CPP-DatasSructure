#include<iostream>
using namespace std;
/*
 *The rule is that the compiler
selects the function based on the contents of the pointer ptr , not on the type of the pointer


Late Binding
The astute reader may wonder how the compiler knows what function to compile. In NOTVIRT
the compiler has no problem with the expression
ptr->show();
It always compiles a call to the show() function in the base class. But in VIRT the compiler
doesn’t know what class the contents of ptr may contain. It could be the address of an object
of the Derv1 class or of the Derv2 class. Which version of draw() does the compiler call? In
fact the compiler doesn’t know what to do, so it arranges for the decision to be deferred until
the program is running. At runtime, when it is known what class is pointed to by ptr , the
appropriate version of draw will be called. This is called late binding or dynamic binding.
(Choosing functions in the normal way, during compilation, is called early binding or
static binding.) Late binding requires some overhead but provides increased power and
flexibility.
We’ll put these ideas to use in a moment, but first let’s consider a refinement to the idea of
virtual functions.
,
 * */
class Base {
	private:
	public:
		virtual void show(){
			cout<<"Base"<<endl;
		}

};
class Drv1 : public Base {
	private:
	public:
		void show() {cout<<"Drive1"<<endl;}
};
class Drv2 : public Base {
	private:
	public: void show() {cout<<"Drive2"<<endl;}
};

int main(int argc, char** argv) {

	Drv1 dv1;
	Drv2 dv2;
	Base* bptr;
	Base bp;
	bptr = &dv1;
	bptr->show();

	bptr = &dv2;
	bptr->show();

	//bptr &bp;
	//bptr->show();

	bp.show();

	return 0;
}
