#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv) {

	int array1[] = {1,4,6,8,9,33,-2};
	int array2[] = {657,-76574,3};
	int array3[10] = {0};

	merge(array1, array1+7,array2,array2+3,array3);

	for(int i=0;i<10;i++)
		cout<<array3[i]<<endl;

	return 0;
}
