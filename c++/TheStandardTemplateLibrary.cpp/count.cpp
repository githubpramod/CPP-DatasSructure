#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv) {

	int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int r;
	int find = 1;
	r = count ( array, array + 10, find );
	cout <<" There are : "<< r <<  " Times found!!!! "<< find<<endl;

	return 0;
}
