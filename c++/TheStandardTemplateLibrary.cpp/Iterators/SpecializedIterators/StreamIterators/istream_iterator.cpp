#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	list<float> fList(5);

	cout << "\nEnter 5 floating-point numbers: ";
	istream_iterator<float> cin_iter(cin);

	istream_iterator<float> end_of_stream;

	copy( cin_iter, end_of_stream, fList.begin() );
	cout << endl;

	ostream_iterator<float> ositer(cout, "--");
	copy(fList.begin(), fList.end(), ositer);
	cout << endl;

	return 0;
}
