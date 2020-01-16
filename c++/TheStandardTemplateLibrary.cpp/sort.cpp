#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv) {
	int array[10] = {33,55,2,-7,905,-876,26,768,534,90182};
	sort(array, array+10);

	for(int i=0; i<sizeof(array)/sizeof(int); i++)
		cout<<array[i]<<endl;

	return 0;
}
