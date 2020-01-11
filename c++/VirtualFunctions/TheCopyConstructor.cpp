#include<iostream>
/*
 * Do we need to use a reference in the argument to the copy constructor? Could we pass by
value instead? No, the compiler complains that it is out of memory if we try to compile
alpha(alpha a)
Why? Because when an argument is passed by value, a copy of it is constructed. What makes
the copy? The copy constructor. But this is the copy constructor, so it calls itself. In fact, it
calls itself over and over until the compiler runs out of memory. So, in the copy constructor,
the argument must be passed by reference, which creates no copies.
 *
 * Define Both Copy Constructor and Assignment Operator
In fact, if the constructor to a class involves the use of system resources such as memory or
disk files, you should almost always overload both the assignment operator and the copy con-
structor, and make sure they do what you want.
How to Prohibit Copying
We’ve discussed how to customize the copying of objects using the assignment operator and
the copy constructor. Sometimes, however, you may want to prohibit the copying of an object
using these operations. For example, it might be essential that each member of a class be cre-
ated with a unique value for some member, which is provided as an argument to the construc-
tor. If an object is copied, the copy will be given the same value. To avoid copying, overload
the assignment operator and the copy constructor as private members.
class alpha
{
private:
alpha& operator = (alpha&);
alpha(alpha&);
};
// private assignment operator
// private copy constructor
As soon as you attempt a copying operation, such as
alpha a1, a2;
a1 = a2;
alpha a3(a1);
// assignment
// copy constructor
the compiler will tell you that the function is not accessible. You don’t need to define the func-
tions, since they will never be called.
 * 
 * */
using namespace std;

class alpha {
	private:
		int data;
	public:
		alpha() {}
		alpha(int val) : data(val) {}
		alpha(alpha& a) {
			cout<<"Invoked Copy Constr!!"<<endl;
			data = a.data;
		}
		void show() {cout<<"Data: "<<data<<endl;}
		alpha operator =(alpha& a) {
			cout<<"Assignment operator invoked!"<<endl;
			data = a.data;
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
	//alpha al3 = al;
	//or right thing
	alpha al3(al);
	al3.show();

	return 0;
}
