/*exponent (m)to the n
 *
 * */
#include<iostream>
using namespace std;
int pow1(int m, int n){

	if(n == 0) return 1;
	else return pow1(m*m,n-1);
}
int pow(int m, int n) {

	if(n == 0) return 1;
	if(n%2==0) return pow(m*m,n/2);
	else return pow(m*m,(n-1)/2);
}
int main(int argc, char** argv){

	int val = 5;
	int poww = 5;

	//cout<< pow(val,poww) << endl;
	cout<< pow1(val,poww) << endl;

	return 0;
}
