#include "verylong.h"

int main(int argc, char** argv) {
	unsigned long numb, j;
	verylong fact=1;
	cout << "\n\nEnter number: ";
	cin >> numb;

	for(j=numb; j>0; j--)
		fact = fact * j;
	cout << "Factorial is ";
	fact.putvl();
	cout << endl;

	return 0;
}

