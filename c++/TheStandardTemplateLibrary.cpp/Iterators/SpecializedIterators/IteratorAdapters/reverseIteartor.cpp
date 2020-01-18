/*The STL provides three variations on the normal iterator. These are the reverse iterator, the
insert iterator, and the raw storage iterator. The reverse iterator allows you to iterate backward
through a container. The insert iterator changes the behavior of various algorithms, such as
copy() and merge() , so they insert data into a container rather than overwriting existing data.
The raw storage iterator allows output iterators to store data in uninitialized memory, but it’s
used in specialized situations
 *
 * */

#include <iostream>
#include <list>
using namespace std;
int main(int argc, char** argv) {
	int arr[] = { 2, 4, 6, 8, 10 };
	list<int> theList;

	for(int j=0; j<5; j++)
		theList.push_back( arr[j] );

	list<int>::reverse_iterator revit;
	revit = theList.rbegin();

	while( revit != theList.rend() )
		cout << *revit++ << ' ';
	cout << endl;
	
	return 0;
}
