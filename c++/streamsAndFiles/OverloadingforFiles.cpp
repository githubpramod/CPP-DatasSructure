#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class distance1 {
	private:
		int feet;
		float inches;
	public:
		distance1() : feet(0),inches(0.0) {}
		distance1(int f, float ich) : feet(f), inches(ich) {}
		friend istream& operator >>(istream& s, distance1& d);
		friend ostream& operator <<(ostream& s, distance1& d);
};

istream& operator >>(istream& s, distance1& d) {
	char dummy;
	s>>d.feet>>dummy>>dummy>>d.inches>>dummy;
	return s;
}
ostream& operator <<(ostream&s, distance1& d) {
	s<<d.feet<<"-"<<d.inches<<endl;
	return s;
}

int main(int argc, char** argv) {

	char ch;
	distance1 d1;
	ofstream ofile;
	ofile.open("DIST.dat");

	do {
		cout << "\nEnter Distance: ";
		cin >> d1;
		ofile << d1;
		cout << "Do another (y/n)? ";
		cin >> ch;
	} while(ch != 'n');
	ofile.close();
	ifstream ifile;
	ifile.open("DIST.DAT");
	cout << "\nContents of disk file is:\n";
	while(true) {
		ifile >> d1;
		if( ifile.eof() )
			break;
		cout << "Distance = " << d1 <<endl;
	}

	return 0;
}
