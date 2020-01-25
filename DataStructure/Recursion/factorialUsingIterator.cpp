#include<iostream>
using namespace std;
int fect(int val) {
 	int f = 1;
	int i = 0;
	for(i=1; i<=val;i++)
		f=f*i;
	return f;
}
int main(int argc, char** argv) {

	int val = 5;
	cout<<fect(val)<<endl;
	return 0;
}
