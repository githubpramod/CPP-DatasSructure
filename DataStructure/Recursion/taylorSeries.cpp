#include<iostream>
using namespace std;
double e(int x, int n) {

	static int p = 1, f = 1;
	int r;
	if(n==0)
		return 1;
	else {
	
		r = e(x,n-1);
		p = p*x;
		f=f*n;
		return (r+(p/f));
	}
}
int main(int argc, char** argv) {

	cout <<e(2,10)<<endl;
	return 0;
}
