#include<iostream>
#include<string>
using namespace std;

auto test(){// ->string { // in both way can use

	return "Hello return from auto:";
}

int main(int argc, char** argv) {

	// static or auto int value = 77; in c++98
	auto value = 79;
	auto String = "string";
	cout << "Int type auto : " << value << endl;
	cout << "string type auto : " << String << endl;

	cout << test() <<endl;

	return 0;
}
