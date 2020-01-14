#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	const unsigned long SIZE = 1000000000000;
	char* ptr;
	try {
		ptr = new char[SIZE];
	} catch(bad_alloc) {
		cout << "\nbad_alloc exception: can’t allocate memory.\n";
		return(1);
	}
	delete[] ptr;
	cout << "\nMemory use is successful.\n";
	
	return 0;
}

