#include<iostream>
#include<fstream>
using namespace std;
/*
int main(int argc, char** argv) {

	ofstream outfile("TEST.txt");
	
	outfile <<"I fear thee, ancient Mariner!\n";
	outfile <<"I fear thy skinny hand\n";
	outfile <<"And thou art long, and lank, and brown,\n";
	outfile <<"As is the ribbed sea sand.\n";

	return 0;
}
*/

int main(int argc, char** argv) {
	const int MAX = 80;
	char buffer[MAX];
	ifstream infile("TEST.txt");
	while( !infile.eof() ) {
		infile.getline(buffer, MAX);
	cout << buffer << endl;
	}
	
	return 0;
}
