#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string str = "Time is a great teacher, but unfortunately "
	"it kills all its pupils. Berlioz";
	ofstream outfile("TEST123.TXT");
	for(int j=0; j<str.size(); j++)
		outfile.put( str[j] );
	cout << "File written\n";

	return 0;
}
