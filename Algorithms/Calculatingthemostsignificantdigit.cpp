/*Suppose the number is N then 
Let double K = log10(N);
now K = K - floor(K);
int X = pow(10, K);
X will be the most significant digit.
 *
 * */

#include<iostream>
using namespace std;

int main(int argc, char** argv) {

	int var = 12;
	double K = log10(var);
	return 0;
}
