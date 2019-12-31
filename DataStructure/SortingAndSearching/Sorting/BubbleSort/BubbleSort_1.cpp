#include<iostream>
using namespace std;

inline void swap(int *A,int i,int j) {

	int temp;
	temp =A[i];
	A[i]=A[j];
	A[j]=temp;
}

static bool prior(int x, int y){

	return x<y? true :false;
}

int main(int argc, char** argv) {

	int array[10] = {6,86,8,76,1,4,2,32,54,3};

	for(int i=0; i<10;i++)
		for(int j=10-1; j>i; j--)
			if(array[j]<array[j-1]){
					swap(&array[0],j,j-1);
				}
			

	for(int a=0; a<10;a++)
		cout<<array[a]<<endl;
	return 0;
}
