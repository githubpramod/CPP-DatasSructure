/*
 *It’s possible to find out information about an object’s class and even change the class of an
object at runtime. We’ll look briefly at two mechanisms: the dynamic_cast operator, and the
typeid operator. These are advanced capabilities, but you may find them useful someday.
These capabilities are usually used in situations where a variety of classes are descended
(sometimes in complicated ways) from a base class. For dynamic casts to work, the base class
must be polymorphic; that is, it must have at least one virtual function.
For both dynamic_cast and typeid to work, your compiler must enable Run-Time Type
Information (RTTI).
 *
 * 
 *Checking the Type of a Class with dynamic_cast
Suppose some other program sends your program an object (as the operating system might do
with a callback function). It’s supposed to be a certain type of object, but you want to check it
to be sure. How can you tell if an object is a certain type? The dynamic_cast operator pro-
vides a way, assuming that the classes whose objects you want to check are all descended from
a common ancestor.
 * */

#include<iostream>
#include<typeinfo>
using namespace std;

class Base {
	virtual void BaseFunc() {}
};

class Drive : public Base {

};

class DriveTwo : public Base {

};

bool isDerv1(Base* ptr) {
	Drive* pDrv1;
	if(pDrv1 = dynamic_cast<Drive*>(ptr))
		return true;
	else
		return false;
}

int main(int argc, char** argv) {

	Drive* d1 = new Drive;
	DriveTwo* d2 = new DriveTwo;
	if( isDerv1(d1) )
		cout << "d1 is a member of the Derv1 class\n";
	else
		cout << "d1 is not a member of the Derv1 class\n";

	if( isDerv1(d2) )
		cout << "d2 is a member of the Derv2 class\n";
	else
		cout << "d2 is not a member of the Derv2 class\n";

	return 0;
}
