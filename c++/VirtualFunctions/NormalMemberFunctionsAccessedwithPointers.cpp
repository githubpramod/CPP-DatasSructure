#include<iostream>
using namespace std;
/*
 *But wait—how can we get away with this? Doesn’t the compiler complain that we’re assigning
an address of one type ( Derv1 ) to a pointer of another ( Base )? On the contrary, the compiler is
perfectly happy, because type checking has been relaxed in this situation, for reasons that will
become apparent soon. The rule is that pointers to objects of a derived class are type-
compatible with pointers to objects of the base class
 * */
class Base {
	private:
	public:
		void show(){
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

	bptr = &dv1;
	bptr->show();

	bptr = &dv2;
	bptr->show();

	return 0;
}
