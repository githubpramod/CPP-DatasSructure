#include <iostream>
#include <string>
/*
 * Self-Containing Classes
 * We should note a possible pitfall in the use of self-referential classes and structures. The link
structure in LINKLIST contained a pointer to the same kind of structure. You can do the same
with classes:
class sampleclass
{
sampleclass* ptr;
};
// this is fine
However, while a class can contain a pointer to an object of its own type, it cannot contain an
object of its own type:
class sampleclass
{
sampleclass obj;
};
// can’t do this
This is true of structures as well as classes.
* 
* when we sort person objects, we don’t move the objects themselves; we move the
pointers to the objects. This eliminates the need to shuffle the objects around in memory,
which can be very time-consuming if the objects are large. It could also, if we wanted, allow
us to keep multiple sorts—one by name and another by phone numbe
 * */
using namespace std;
class person {
	protected:
		string name;
	public:
		void setName(){ cout << "Enter name: "; cin >> name; }
		void printName(){ cout << endl << name; }
		string getName(){ return name; }
};

void order(person** pp1, person** pp2) {

	if( (*pp1)->getName() > (*pp2)->getName() ){
		person* tempptr = *pp1;
		*pp1 = *pp2;
		*pp2 = tempptr;
	}
}

void bsort(person** pp, int n) {

	int j, k;
	for(j=0; j<n-1; j++)
		for(k=j+1; k<n; k++)
			order(pp+j, pp+k);
}

int main(int argc, char** argv) {
	person* persPtr[100];

	int n = 0;
	char choice;
	do {
		persPtr[n] = new person;
		persPtr[n]->setName();
		n++;
		cout << "Enter another (y/n)? ";
		cin >> choice;
	}
	while( choice=='y' );
	
	cout << "\nUnsorted list:";
	
	for(int j=0; j<n; j++)
	{ persPtr[j]->printName(); }
	
	bsort(persPtr, n);
	
	cout << "\nSorted list:";
	
	for(int j=0; j<n; j++)
	{ persPtr[j]->printName(); }
	
	cout << endl;
	
	return 0;
}
