#include<iostream>
using namespace std;

int main(int argc, char** argv) {

	int i;
	while(true) {
		cout << "\nEnter an integer:\n";
		cin >> i;
		if( cin.good() ) {
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Incorrect input";

		cin.ignore(10, '\n');
	}
	cout << "integer is " << i;

	return 0;
}
