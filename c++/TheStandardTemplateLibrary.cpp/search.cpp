#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int* ptr;


	int source[] = { 11, 44, 33, 11, 22, 33, 11, 22, 44 };
	int pattern[] = { 1, 22, 3 };
	ptr = search(source, source+9, pattern, pattern+3);
	if(ptr == source+9)
		cout << "No match found\n";
	else
		cout << "Match at " << (ptr - source) << endl;

	return 0;
}
