#include<iostream>
using namespace std;
/*
 *Once you’ve placed a pure virtual function in the base class, you must override it in all the
derived classes from which you want to instantiate objects. If a class doesn’t override the pure
virtual function, it becomes an abstract class itself, and you can’t instantiate objects from it
(although you might from classes derived from it). For consistency, you may want to make all
the virtual functions in the base class pure.
 * */
class Base {
	private:
	public:
		virtual void show() = 0;

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

	//Base bsa; // bad idea, can not be instantiate objects from abstract class 
		  //and asbstract class have pure virtual function
	Base* base[2];

	Drv1 drv1;
	Drv2 drv2;

	base[1] = &drv1;
	base[2] = &drv2;

	base[1]->show();
	base[2]->show();

	return 0;
}
