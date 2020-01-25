#include<iostream>
using namespace std;

int main(int argc, char** argv) {

	int var=0;
	cout << "Enter value to chaeck for even or odd!!" <<endl;
	cin >> var;

	if(var & 1)
		cout << "Odd" << endl;
	else
		cout << "Even" << endl;

	return 0;
}
