#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv) {

	int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int *ptr;
	ptr = find ( array, array + 10, 901 );
	cout <<" Object found at location: "<< ptr - array <<endl;

	return 0;
}
