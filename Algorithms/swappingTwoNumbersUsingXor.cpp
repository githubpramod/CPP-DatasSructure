#include<iostream>
using namespace std;

int main(int argc, char** argv) {

	int var1 = 9;
	int var2 = 6;
	cout << "Before swapping!!" << endl;
	cout << "Var1 = " << var1 << endl;
	cout << "Var2 = " << var2 << endl;

	cout << "After swapping!!" << endl;
	var1 ^= var2;
	var2 ^= var1;
	var1 ^= var2;

	cout << "Var1 = " << var1 << endl;
        cout << "Var2 = " << var2 << endl;

	return 0;
}
