#include<iostream>
using namespace std;

inline void swap(int *A, int i, int j) {
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
bool prior(int x, int y){
	return x < y? true : false;
}

int main(int argc, char** argv){
	int temp;
	int array[10]={6,84,8,76,1,4,2,32,54,3};

	for(int a=1;a<10;a++)
		for(int b=a;(b>0)&&(prior(array[b],array[b-1]));b--)
			swap(&array[0],b,b-1);

	for(int i=0;i<10;i++)
		cout<<array[i]<<endl;

	return 0;
}
