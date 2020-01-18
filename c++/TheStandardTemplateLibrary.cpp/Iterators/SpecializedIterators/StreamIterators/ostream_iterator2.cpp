#include <fstream>
#include <algorithm>
#include <list>
using namespace std;
int main(int argc, char** argv) {
	int arr[] = { 11, 21, 31, 41, 51 };
	list<int> theList;
	for(int j=0; j<5; j++)
		theList.push_back( arr[j] );
	ofstream outfile("ITER.DAT");

	ostream_iterator<int> ositer(outfile, " ");

	copy(theList.begin(), theList.end(), ositer);

	return 0;
}
