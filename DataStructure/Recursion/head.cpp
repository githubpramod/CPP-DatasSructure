#include<iostream>
using namespace std;

void func(int val) {

	if(val > 0) {
		func(val - 1);
		cout << "Val: " <<val << endl;
	}

}
int main(int argc, char** argv) {

	int val = 5;
	func(val);
	return 0;
}
