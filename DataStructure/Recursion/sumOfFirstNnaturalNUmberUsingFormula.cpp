#include<iostream>
using namespace std;
int sum(int fnN) {

	return (fnN*(fnN+1))/2;
}
int main(int argc, char** argv) {

	int fnN = 5;
	cout<<"Sum:" <<sum(fnN) << endl;
	return 0;
}
