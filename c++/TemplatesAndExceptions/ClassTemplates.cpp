/*
 *Class templates are generally used for data
storage (container) classes.
Stacks and linked lists, which we encountered in previous chap-
ters, are examples of data-storage classes. However, the examples of these classes that we pre-
sented could store data of only a single basic type.
 *
 * e would need to create a new stack class for every data type we wanted to store. It
would be nice to be able to write a single class specification that would work for variables of
all types, instead of a single basic type. As you may have guessed, class templates allow us to
do this.
 * 
 *Class templates differ from function templates in the way they are instantiated. To create an
actual function from a function template, you call it using arguments of a specific type.
Classes, however, are instantiated by defining an object using the template argument.
Stack<float> s1;
This creates an object, s1 , a stack that stores numbers of type float . The compiler provides
space in memory for this object’s data, using type float wherever the template argument Type
appears in the class specification. It also provides space for the member functions
 * */
#include<iostream>
using namespace std;

const int MAX = 100;

template<class atype>
class Stack {
	private:
		atype stackArray[MAX];
		int top;
	public:
		Stack() { top = -1; }
		void push(atype val) { stackArray[++top] = val; }
		atype pop() { return stackArray[top--]; }
};

int main(int argc, char** argv) {

	Stack<float> st;
	st.push(1111.1F);
	st.push(2222.2F);
	st.push(3333.3F);
	cout << "1: " << st.pop() << endl;
	cout << "2: " << st.pop() << endl;
	cout << "3: " << st.pop() << endl;

	Stack<long> sk;
	sk.push(123123123L);
	sk.push(234234234L);
	sk.push(345345345L);
	cout << "1: " << sk.pop() << endl;
	cout << "2: " << sk.pop() << endl;
	cout << "3: " << sk.pop() << endl;



	return 0;
}
