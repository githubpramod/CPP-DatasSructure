#include<iostream>
using namespace std;

int fect(int val) {
	if(val == 0)
		return 1;
	else return fect(val-1)*val;
}
int main(int argc, char** argv) {

	int fectNum = 5;

	cout <<fect(fectNum) <<endl;
	return 0;
}
