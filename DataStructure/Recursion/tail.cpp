#include<iostream>
using namespace std;

void func(int val) {

	if(val > 0) {
		cout << "Val: " << val <<endl;
		func(val - 1);
	}
}
int main(int argc, char** argv) {

	int val = 5;
	func(val);

	return 0;
}