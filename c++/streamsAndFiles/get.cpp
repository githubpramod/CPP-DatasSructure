#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	char ch;
	ifstream infile("TEST123.TXT");
	/*while( infile ) {
		infile.get(ch);
		cout << ch;
	}*/
	
	cout << infile.rdbuf();
	cout << endl;
	
	cout << endl;

	return 0;
}
