/*Sets are often used to hold objects of user-defined classes such as employees in a database.
 * However, sets can also hold simpler elements
such as strings.
The objects are arranged in order, and the
entire object is the key.
 *
 * */
#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(int argc, char** argv) {

	string name[] = {"Juanita", "Robert", "Mary", "manda", "Marie"};
	set<string, less<string> > nameSet(name, name+5);
	set<string, less<string> >::iterator itr;

	nameSet.insert("Kumar");
	nameSet.insert("Larry");
	nameSet.insert("Barry");

	cout<<"\nSize=" << nameSet.size() <<endl;
	itr = nameSet.begin();

	while(itr!=nameSet.end())
		cout<<*itr++<<endl;
	
	string searchName;
	cout << "\nEnter name to search for: ";
	cin >> searchName;

	itr = nameSet.find(searchName);
	
	if( itr == nameSet.end() )
		cout << "The name " << searchName << " is NOT in the set.";
	else
		cout << "The name " << *itr << " IS in the set.";
	
	cout << endl;

	return 0;
}
