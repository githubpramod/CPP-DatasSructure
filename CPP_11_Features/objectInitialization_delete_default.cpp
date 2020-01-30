#include <iostream>
using namespace std;

class Test{
private:
	int id{9};
	string name{"Pramod"};
public:
	Test() = default;
	Test(const Test &other) = delete;
	Test &operator=(const Test &other) = default;
	Test(int id, string name):
		id(id),name(name){

	}
	void print(){
		cout<<id<<":"<<name<<endl;
	}
};

int main(int argc, char** argv) {
	cout << "!!!ObjectInitializationDeleteAndDefault!!!" << endl;

	Test test;
	test.print();

	Test test1(77,"heyhey");
	test1.print();

	test = test1;
	test.print();

	Test test4 = test;
	test4.print();

	return 0;
}

