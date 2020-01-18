#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main(int argc, char** argv) {
	list<int> theList(5);
	list<int>::iterator iter;
	int data = 0;

	for(iter = theList.begin(); iter != theList.end(); iter++)
		*iter = data += 2;

	iter = find(theList.begin(), theList.end(), 999999999);
	if( iter != theList.end() )
		cout << "\nFound 8.\n";
	else
		cout << "\nDid not find 8.\n";

	return 0;
}
