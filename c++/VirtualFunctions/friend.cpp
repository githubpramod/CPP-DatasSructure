/*
 *magine that you want a function to operate on objects of two different classes. Perhaps the
function will take objects of the two classes as arguments, and operate on their private data. In
this situation there’s nothing like a friend function.

In this program, the two classes are alpha and beta . The constructors in these classes initialize
their single data items to fixed values (3 in alpha and 7 in beta ).
We want the function frifunc() to have access to both of these private data members, so we
make it a friend function. It’s declared with the friend keyword in both classes:
friend int frifunc(alpha, beta);
This declaration can be placed anywhere in the class; it doesn’t matter whether it goes in the
public or the private section.


 * */

#include<iostream>
using namespace std;

class beta;

class alpha {
	private:
		int data;
	public:
		alpha() : data(3) { }

		friend int frifunc(alpha, beta); //friend function
};

class beta {
	private:
		int data;
	public:
		beta() : data(7) { }

		friend int frifunc(alpha, beta); //friend function
};

int frifunc(alpha a, beta b) {
	return( a.data + b.data );
}

int main(int argc, char** argv) {

	alpha aa;
	beta bb;
	cout << frifunc(aa, bb) << endl;
	
	return 0;
}
