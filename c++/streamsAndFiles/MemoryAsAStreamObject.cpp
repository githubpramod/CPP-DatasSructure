#include <strstream>
#include <iostream>
#include <iomanip> //for setiosflags()
using namespace std;
const int SIZE = 80;
int main(int argc, char** argv) {
	char ch = 'a';
	int j = 105;
	double d = 7592.3422;
	char str1[] = "Singh";
	char str2[] = "Jeorge";
	char membuff[SIZE];
	ostrstream omem(membuff, SIZE); 
	omem << "ch=" << ch << endl
		<< "j=" << j << endl
		<< setiosflags(ios::fixed)
		<< setprecision(2)
		<< "d=" << d << endl
		<< "str1=" << str1 << endl
		<< "str2=" << str2 << endl
		<< ends;
	cout << membuff;
return 0;
}
