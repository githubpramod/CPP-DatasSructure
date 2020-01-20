#include<iostream>
using namespace std;

int func(int n) {

	if(n>0) {
	
		//cout <<n << endl;
		func(n-1);
	}
	return 0;
}
int main(int argc, char** argv) {

	int x = 5;
	cout<<"Functio Result is = "<< func(x) << endl;
	return 0;
}
