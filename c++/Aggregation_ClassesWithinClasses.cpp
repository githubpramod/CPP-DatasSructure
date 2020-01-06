/*
 *if a class B is derived by inheritance from a class A , we can say that “ B is a kind of A .” This is
because B has all the characteristics of A , and in addition some of its own. It’s like saying that a
starling is a kind of bird: A starling has the characteristics shared by all birds (wings, feathers,
and so on) but has some distinctive characteristics of its own (such as dark iridescent plumage).
For this reason inheritance is often called a “kind of” relationship.
Aggregation is called a “has a” relationship. We say a library has a book or an invoice has an
item line. Aggregation is also called a “part-whole” relationship: the book is part of the library.
 * 
 *
 * class A
{
};
class B
{
A objA;
};

 * */

#include <iostream>
#include <string>
using namespace std;

class student {
	private:
		string school;
		string degree;
	public:
		void getedu() {
			cout << "Enter name of school or university: "; cin >> school;
			cout << "Enter highest degree earned \n";
			cout << "(Highschool, Bachelor’s, Master’s, PhD): "; cin >> degree;
		}
		void putedu() const {
			cout << "\nSchool or university: " << school;
			cout << "\nHighest degree earned: " << degree;
		}
};
class employee {
	private:
		string name;
		unsigned long number;
	public:
		void getdata() {
			cout << "\nEnter last name: "; cin >> name;
			cout << "Enter number: "; cin >> number;
		}
		void putdata() const {
			cout << "\nName: " << name; 
			cout << "\nNumber: " << number;
		}
};
class manager {
	private:
		string title;
		double dues;
		employee emp;
		student stu;
	public:
		void getdata() {
			emp.getdata();
			cout << "Enter title: "; cin >> title;
			cout << " Enter golf club dues: "; cin >> dues;
			stu.getedu();
		}
		void putdata() const {
			emp.putdata();
			cout << "\nTitle: " << title;
			cout << "\nGolf club dues: " << dues;
			stu.putedu();
		}
};
class scientist {
	private:
		int pubs;
		employee emp;
		student stu;
	public:
		void getdata() {
			emp.getdata();
			cout << "Enter number of pubs: "; cin >> pubs;
			stu.getedu();
		}
		void putdata() const {
			emp.putdata();
			cout << "\n Number of publications: " << pubs;
			stu.putedu();
		}
};
class laborer {
	private:
		employee emp;
	public:
		void getdata(){ emp.getdata(); }
		void putdata() const{ emp.putdata(); }
};

int main(int argc, char** argv) {
	manager m1;
	scientist s1, s2;
	laborer l1;
	cout << endl;
	cout << "\nEnter data for manager 1";
	m1.getdata();//get data for//several employees
	cout << "\nEnter data for scientist 1";
	s1.getdata();
	cout << "\nEnter data for scientist 2";
	s2.getdata();
	cout << "\nEnter data for laborer 1";
	l1.getdata();
	cout << "\nData on manager 1";
	m1.putdata();
//display data for
//several employees
	s1.putdata();
	cout << "\nData on scientist 2";
	s2.putdata();
	cout << "\nData on laborer 1";
	l1.putdata();
	cout << endl;
	return 0;
}
