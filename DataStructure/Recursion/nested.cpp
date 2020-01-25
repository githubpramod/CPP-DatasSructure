#include<iostream>
using namespace std;

int func(int val) {
	if(val>100)
		return val-10;
	else
		return func(func(val+11));
}
int main(int argc, char** argv) {

	int val = 5;
	cout<<func(val)<<endl;

	return 0;
}
