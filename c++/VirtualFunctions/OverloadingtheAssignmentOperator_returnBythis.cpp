#include<iostream>
/*
Beware of Self-Assignment
A corollary of Murphy’s Law states that whatever is possible, someone will eventually do. This
is certainly true in programming, so you can expect that if you have overloaded the = operator,
someone will use it to set an object equal to itself:
alpha = alpha;
Your overloaded assignment operator should be prepared to handle such self-assignment.
Otherwise, bad things may happen. For example, in the main() part of the STRIMEM 2 program,
if you set a String object equal to itself, the program will crash (unless there are other String
objects using the same strCount object). The problem is that the code for the assignment oper-
ator deletes the strCount object if it thinks the object that called it is the only object using the
strCount . Self-assignment will cause it to believe this, even though nothing should be deleted.
 * 
 *Beware of Self-Assignment
A corollary of Murphy’s Law states that whatever is possible, someone will eventually do. This
is certainly true in programming, so you can expect that if you have overloaded the = operator,
someone will use it to set an object equal to itself:
alpha = alpha;
Your overloaded assignment operator should be prepared to handle such self-assignment.
Otherwise, bad things may happen. For example, in the main() part of this program,
if you set a String object equal to itself, the program will crash (unless there are other String
objects using the same strCount object). The problem is that the code for the assignment oper-
ator deletes the strCount object if it thinks the object that called it is the only object using the
strCount . Self-assignment will cause it to believe this, even though nothing should be deleted.
 * 
 * if(this == &S)
return *this;
at the start of operator=() . That should solve the problem.
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
			return *this;
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
