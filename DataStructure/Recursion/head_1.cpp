#include<iostream>
using namespace std;

void func(int val) {

	int i = 1;
	while(i <= val) {
	
		cout << "Val: " << i << endl;
		i++;
	}
}
int main(int argc, char** argv) {

	int val = 5;
	func(val);
	return 0;
}
