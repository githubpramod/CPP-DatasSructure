/*
 *One problem with this approach is that every single call to such a function must be examined
by the program. Surrounding each function call with an if...else statement, and adding
statements to handle the error (or call an error-handler routine), requires a lot of code and
makes the listing convoluted and hard to read.
The problem becomes more complex when classes are used, since errors may take place with-
out a function being explicitly called. For example, suppose an application defines objects of a
class:
SomeClass obj1, obj2, obj3;
How will the application find out if an error occurred in the class constructor? The constructor
is called implicitly, so there’s no return value to be checked.
Things are complicated even further when an application uses class libraries. A class library
and the application that makes use of it are often created by separate people: the class library
by a vendor and the application by a programmer who buys the class library. This makes it
even harder to arrange for error values to be communicated from a class member function to
the program that’s calling the function. The problem of communicating errors from deep
within class libraries is probably the most important problem solved by exceptions.
 * 
 *throw Range();
The Range() part of this statement invokes the implicit constructor for the Range class, which
creates an object of this class. The throw part of the statement transfers program control to the
exception handle
 * 
 *catch(Stack::Range)
{
//code that handles the exception
}
This construction is called the exception handler.
 * 
 *1. Code is executing normally outside a try block.
2. Control enters the try block.
3. A statement in the try block causes an error in a member function.
4. The member function throws an exception.
5. Control transfers to the exception handler (catch block) following the try block.
 * */
#include<iostream>
using namespace std;
const int MAX = 3;

class Stack {
	private:
		int data[MAX];
		int top;
	public:
		class range { };
		Stack() { top = -1; }
		void push(int var) {
		 	if( top >= MAX - 1)
				throw range();
			data[++top] = var;
		}
		int pop() {
			if( top < 0)
				throw range();
			return data[top--];
		}
};

int main(int argc, char** argv) {

	Stack st;
	try {
		st.push(12);
		st.push(23);
		st.push(45);
		//st.push(87);
		cout<<"1: "<<st.pop()<<endl;
		cout<<"2: "<<st.pop()<<endl;
		cout<<"3: "<<st.pop()<<endl;
		//cout<<"4: "<<st.pop()<<endl;
	}catch(Stack::range) {
		cout<<"Exception : Stack full or empty"<<endl;
	}

	cout<<"Done!!"<<endl;

	return 0;
}
