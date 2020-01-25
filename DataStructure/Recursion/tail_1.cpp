#include<iostream>
using namespace std;

void func(int val) {
	while(val > 0) {
	
		cout << "Val: " << val << endl;
		val--;
	}
}
int main(int argc, char** argv) {

	int val = 5;
	func(val);
	return 0;
}
