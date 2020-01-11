#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char** argv) {

	char ch;
	int j;
	double d;
	string str1;
	string str2;
	ifstream infile("fileWrittendata.txt"); //create ifstream object
	//extract (read) data from it
	infile >> ch >> j >> d >> str1 >> str2;
	cout << ch << endl
	<< j << endl
	<< d << endl
	<< str1 << endl
	<< str2 << endl;

	return 0;
}
