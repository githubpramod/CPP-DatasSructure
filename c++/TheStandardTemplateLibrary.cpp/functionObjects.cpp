#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv) {

	float array[] = {3.2, 56.9,23.87,23.432};
	sort(array, array+4,greater<double>());

	for(int a=0;a<4;a++)
		cout<<array[a]<<endl;

	cout<<endl;

	return 0;
}
