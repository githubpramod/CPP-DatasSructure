#include<iostream>
using namespace std;
void func(int val);

void funcA(int val) {

	if(val>1) {
		cout <<"FuncA VAl:" <<val <<endl;
		func(val/2);
	}
}
void func(int val) {

	if(val>0) {
		cout <<"VAl: " <<val <<endl;
		funcA(val-1);
	}
}
int main(int argc, char** argv) {

	int val = 5;

	func(val);

	return 0;
}
