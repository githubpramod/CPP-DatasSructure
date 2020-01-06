#include<iostream>
using namespace std;
/*
 * When
the same function exists in both the base class and the derived class, the function in the derived
class will be executed. (This is true of objects of the derived class. Objects of the base class
don’t know anything about the derived class and will always use the base class functions.)
* 
* say that the derived class function overrides the base class function. So in the preceding state-
ment, since s1 is an object of class Stack2 , the push() function in Stack2 will be executed,
not the one in Stack .
* 
* How do push() and pop() in Stack2 access push() and pop() in Stack ? They use the scope
resolution operator, :: , in the statements
stackk::push(val);
* 
* These statements specify that the push() and pop() functions in Stack are to be called. Without
the scope resolution operator, the compiler would think the push() and pop() functions in
stackD were calling themselves, which—in this case—would lead to program failure. Using the
scope resolution operator allows you to specify exactly what class the function is a member of
 * */
class stackk {
	protected:
		enum {MAX = 3};
		int st[MAX];
		int top;
	public:
		stackk()  { top = -1; }
		void push(int val) { st[++top]=val; }
		int pop() { return st[top--]; }
};

class stackD : public stackk {
	public:
		void push (int val) {
			if(top>=MAX-1){cout<<"\n Stack is full\n";exit(1);}
			stackk::push(val);
		}
		int pop(){
			if(top<0) {cout<<"\n stack is empty\n";exit(1);}
			return stackk::pop();
		}
};

int main(int argc, char** argv){
	stackk s1;
	stackD s2;

	s1.push(23);
	s1.push(34);
	s1.push(45);
	s1.push(256);
	cout<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
    cout<<"S2 start\n";
    s2.push(23);
	s2.push(34);
	s2.push(45);
	s2.push(256);
	cout<<endl;
	cout<<s2.pop()<<endl;
	cout<<s2.pop()<<endl;
	cout<<s2.pop()<<endl;
	cout<<s2.pop()<<endl;
	return 0;
}
