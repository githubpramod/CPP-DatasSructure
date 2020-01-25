#include<iostream>
using namespace std;
int sum(int fnN) {

	if(fnN==0)
		return 0;
	else
		return (sum(fnN-1)+fnN);
}
int main(int argc, char** argv) {

	int fnN=5;
	cout <<sum(fnN) <<endl;
	return 0;
}
