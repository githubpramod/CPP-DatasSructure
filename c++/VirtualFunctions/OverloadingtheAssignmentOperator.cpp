#include<iostream>
/*
 *Notice that the argument to operator=() is passed by reference.
 * It is not absolutely necessary
to do this, but it’s usually a good idea. Why? As you know, an argument passed by value gen-
erates a copy of itself in the function to which it is passed. The argument passed to the
operator=() function is no exception. If such objects are large, the copies can waste a lot of
memory. Values passed by reference don’t generate copies, and thus help to conserve memory.
 *
 * Also, there are certain situations in which you want to keep track of the number of objects (as
in the STATFUNC example, where we assigned numbers to the objects). If the compiler is gener-
ating extra objects every time you use the assignment operator, you may wind up with more
objects than you expected. Passing by reference helps avoid such spurious object creation.
 *
 * As we’ve seen, a function can return information to the calling program by value or by refer-
ence. When an object is returned by value, a new object is created and returned to the calling
program. In the calling program, the value of this object can be assigned to a new object or it
can be used in other ways. When an object is returned by reference, no new object is created.
A reference to the original object in the function is all that’s returned to the calling program.
The operator=() function in ASSIGN returns a value by creating a temporary alpha object and
initializing it using the one-argument constructor in the statement
 * 
 *alpha& operator = (alpha& a)
// bad idea in this case
Unfortunately, we can’t use reference returns on variables that are local to a function.
Remember that local ( automatic ) variables—that is, those created within a function (and not
designated static )—are destroyed when the function returns. A return by reference returns
only the address of the data being returned, and, for local data, this address points to data
within the function. When the function is terminated and this data is destroyed, the pointer is
left with a meaningless value. Your compiler may flag this usage with a warning. (We’ll see
one way to solve this problem in the section “The this Pointer” later in this chapter.)
 * 
 *The assignment operator is unique among operators in that it is not inherited. If you overload
the assignment operator in a base class, you can’t use this same function in any derived classes.
 * 
 *
 * */
using namespace std;

class alpha {
	private:
		int data;
	public:
		alpha() {}
		alpha(int val) : data(val) {}
		void show() {cout<<"Data: "<<data<<endl;}
		alpha operator =(alpha& a) {
			cout<<"Assignment operator invoked!"<<endl;
			data = a.data;
			return alpha(data);
		}
};

int main(int argc, char** argv) {
	alpha al(123);
	alpha al2;

	al.show();

	al2 = al;
	cout<<"Assign the object"<<endl;
	al2.show();
       // invoked inititilaize if no copy constructere if copy constructer then it will invoke copy constr.
	cout<<"Initialize object or copy constr!"<<endl;
	alpha al3 = al;
	al3.show();

	return 0;
}
