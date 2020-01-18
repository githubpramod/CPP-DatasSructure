/*
 *Some algorithms have versions that end in _if . These algorithms take an extra parameter
called a predicate, which is a function object or a function.
For example, the find() algorithm
finds all elements equal to a specified value. We can also create a function that works with the
find_if() algorithm to find elements with any arbitrary characteristic.
 *
 * */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//--------------------------------------------------------------
bool isDon(string name)
//returns true if name==”Don”
{
return name == "Don";
}
//--------------------------------------------------------------
string names[] = { "George", "Estelle", "Don", "Mike", "Bob" };
int main()
{
string* ptr;
ptr = find_if( names, names+5, isDon );
if(ptr==names+5)
cout << "Don is not on the list.\n";
else
cout << "Don is element "<< (ptr-names) << " on the list.\n";
return 0;
}
