/*
 * When the program terminates, the outfile object goes out of scope. This calls its destructor,
which closes the file, so we don’t need to close the file explicitly
 * 
 * */

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(int argc, char** argv) {

	char ch = 'x';
	int j = 77;
	double d = 6.02;
	string str1 = "Kafka";
	string str2 = "Proust";

	ofstream outfile("fileWrittendata.txt"); //create ofstream object
	outfile << ch
		<< j
		<< ' '
		<< d
		<< str1
		<< ' '
		<< str2;
	cout << "File written\n";
	return 0;
}
