#include<iostream>
using namespace std;
int fabonacci(int n) {

	if(n<=1) return n;
	else return fabonacci(n-2)+fabonacci(n-1);
}
int fabonacci1(int n) {


	int t0=0,t1=1,s,i;
	if(n<=1) return n;
	for(i=2;i<=n;i++){
	
		s= t0+t1;
		t0=t1;
		t1=s;
	}
	return s;
}
int main(int argc, char** argv) {

	int val = 5;
	cout<<fabonacci(val)<<endl;
	cout<<fabonacci1(val)<<endl;
	return 0;
}
