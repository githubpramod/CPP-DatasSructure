/*A map stores pairs. A pair consists of a key object and a value object. The key object contains
a key that will be searched for. The value object contains additional data. As in a set, the key
objects can be strings, numbers, or objects of more complex classes. The values are often
strings or numbers, but they can also be objects or even containers.

For example, the key could be a word, and the value could be a number representing how
many times that word appears in a document. Such a map constitutes a frequency table. Or the
key could be a word and the value could be a list of page numbers. This arrangement could
represent an index, like the one at the back of this book.

One common way to use maps is as associative arrays. In an ordinary C++ array the array
index, which is used to access a particular element, is an integer. Thus in the expression
anArray[3] , the 3 is the array index. An associative array works in a similar way except that
you can choose the data type of the array index. If you’ve defined the index to be a string, for
example, you can say anArray[“jane”] .
 *
 * */

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char** argv) {
	string name;
	int pop;
	string states[] = { "Wyoming", "Colorado", "Nevada", "Montana", "Arizona", "Idaho"};
	int pops[] = { 470, 2890, 800, 787, 2718, 944 };
	map<string, int, less<string> > mapStates;
	map<string, int, less<string> >::iterator iter;

	for(int j=0; j<6; j++) {
		name = states[j];
		pop = pops[j];
		mapStates[name] = pop;
	}
	
	cout << "Enter state: ";
	cin >> name;
	pop = mapStates[name];

	cout << "Population: " << pop << ",000\n";
	cout << endl;

	for(iter = mapStates.begin(); iter != mapStates.end(); iter++)
		cout << (*iter).first << ' ' << (*iter).second << ",000\n";

	return 0;
}
