/*
 *An ostream_iterator object can be used as an argument to any algorithm that specifies an
output iterator.
* The stream value is typically a filename or cout ; here it’s cout .
 * */
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main(int argc, char** argv) {
	int arr[] = { 10, 20, 30, 40, 50 };
	list<int> theList;
	for(int j=0; j<5; j++)
		theList.push_back( arr[j] );

	ostream_iterator<int> ositer(cout, ", ");

	cout << "\nContents of list: ";
	copy(theList.begin(), theList.end(), ositer);
	cout << endl;

	return 0;
}
