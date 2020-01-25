#include<iostream>
using namespace std;

int sum(int val) {

	int i, s = 0;
	for(i=1;i<=val;i++)
		s=s+i;
	return s;
}
int main(int argc, char** argv) {

	int val = 5;
	cout <<sum(val)<<endl;
	return 0;
}
