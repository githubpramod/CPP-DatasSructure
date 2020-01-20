#include<iostream>
using namespace std;

//int x = 0;
int func(int n) {

	static int x = 0;
	if(n>0) {
	
		x++;
		return func(n-1) + x;
	}
	return 0;
}
int main(int argc, char** argv) {

	int r = 0;
	r = func(5);
	cout<< r << endl;
	return 0;
}
