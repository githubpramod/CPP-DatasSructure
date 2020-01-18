/*Our example program starts with a vector of pointers to person objects. These objects are
placed in the vector, then sorted in the usual way, which leads to the pointers, not the persons,
being sorted. This isn’t what we want, and in this case causes no change in the ordering at all,
because the items were inserted in order of increasing addresses. Next, the vector is sorted cor-
rectly, using the function object comparePersons() . This orders items using the contents of
pointers, rather than the pointers themselves. The result is that the person objects are sorted
alphabetically by name.
 *
 * */
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class person {
	private:
		string lastName;
		string firstName;
		long phoneNumber;
	public:
		person() : lastName("blank"), firstName("blank"), phoneNumber(0L) { }
		person(string lana, string fina, long pho) : lastName(lana), firstName(fina), phoneNumber(pho) { }
		friend bool operator<(const person&, const person&);
		friend bool operator==(const person&, const person&);
		void display() const {
			cout << endl << lastName << ",\t" << firstName << "\t\tPhone: " << phoneNumber;
		}
		long get_phone() const { return phoneNumber; }
};

bool operator<(const person& p1, const person& p2) {
	if(p1.lastName == p2.lastName)
		return (p1.firstName < p2.firstName) ? true : false;
	return (p1.lastName < p2.lastName) ? true : false;
}

bool operator==(const person& p1, const person& p2) {
	return (p1.lastName == p2.lastName && p1.firstName == p2.firstName ) ? true : false;
}

class comparePersons {
	public:
		bool operator() (const person* ptrP1, const person* ptrP2) const { return *ptrP1 < *ptrP2; }
};

class displayPerson {
	public:
		void operator() (const person* ptrP) const { ptrP->display(); }
};

int main() {
	vector<person*> vectPtrsPers;

	person* ptrP1 = new person("KuangThu", "Bruce", 4157300);
	person* ptrP2 = new person("Deauville", "William", 8435150);
	person* ptrP3 = new person("Wellington", "John", 9207404);
	person* ptrP4 = new person("Bartoski", "Peter", 6946473);
	person* ptrP5 = new person("Fredericks", "Roger", 7049982);
	person* ptrP6 = new person("McDonald", "Stacey", 7764987);

	vectPtrsPers.push_back(ptrP1);
	vectPtrsPers.push_back(ptrP2);
	vectPtrsPers.push_back(ptrP3);
	vectPtrsPers.push_back(ptrP4);
	vectPtrsPers.push_back(ptrP5);
	vectPtrsPers.push_back(ptrP6);

	for_each(vectPtrsPers.begin(), vectPtrsPers.end(), displayPerson() );
	sort( vectPtrsPers.begin(), vectPtrsPers.end() );

	cout << "\n\nSorted pointers";

	for_each(vectPtrsPers.begin(),vectPtrsPers.end(), displayPerson() );
	sort( vectPtrsPers.begin(), vectPtrsPers.end(), comparePersons() );

	cout << "\n\nSorted persons";

	for_each(vectPtrsPers.begin(),vectPtrsPers.end(), displayPerson() );

	while( !vectPtrsPers.empty() ) {
		delete vectPtrsPers.back();
		vectPtrsPers.pop_back();
	}
	
	cout << endl;

	return 0;
}
