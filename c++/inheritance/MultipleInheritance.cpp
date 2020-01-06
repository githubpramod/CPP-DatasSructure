#include<iostream>
using namespace std;
const int LEN = 80;
/*
 *A class can be derived from more than one base class. This is called multiple inheritance
 *
 * */

class student {
	private:
		char school[LEN];
		char degree[LEN];
	public:
		void getedu() {
			cout << "Enter name of school or university: ";
			cin >> school;
			cout << "Enter highest degree earned \n";
			cout << "(Highschool, Bachelor’s, Master’s, PhD): ";
			cin >> degree;
		}
		void putedu() const {
			cout << "\n School or university: " << school;
			cout << "\nHighest degree earned: " << degree;
		}
};

class employee {
	private:
		char name[LEN];
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
class manager : private employee, private student {
	private:
		char title[LEN];
		double dues;
	public:
		void getdata() {
			employee::getdata();
			cout << "Enter title: "; cin >> title;
			cout << "Enter golf club dues: "; cin >> dues;
			student::getedu();
		}
		void putdata() const {
			employee::putdata();
			cout << "\nTitle: " << title;
			cout << "\nGolf club dues: " << dues;
			student::putedu();
		}
};

class scientist : private employee, private student {
	private:
		int pubs;
	public:
		void getdata() {
			employee::getdata();
			cout << "Enter number of pubs: "; cin >> pubs;
			student::getedu();
		}
		void putdata() const{
			employee::putdata();
			cout << "\nNumber of publications: " << pubs;
			student::putedu();
		}
};

class leborer : public employee {

};

int main(int argc, char** argv) {
	manager m1;
	scientist s1, s2;
	leborer l1;
	cout << endl;
	cout << "\nEnter data for manager 1";
	m1.getdata();

	cout << "\nEnter data for scientist 1";
	s1.getdata();
	cout << "\nEnter data for scientist 2";
	s2.getdata();
	cout << "\nEnter data for laborer 1";
	l1.getdata();
	cout << "\nData on manager 1";
	m1.putdata();

	cout << "\nData on scientist 1";
	s1.putdata();
	cout << "\nData on scientist 2";
	s2.putdata();
	cout << "\nData on laborer 1";
	l1.putdata();

	return 0;
}
