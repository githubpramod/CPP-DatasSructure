/*
 * define an iterator of type list<int> to match the container type.
 * */
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(int argc, char** argv) {

	int array[] = {1,2,3,4,5,6,7,8,9};
	list<int> ilist;

	for(int i=0; i<9;i++)
		ilist.push_back(array[i]);

	list<int>::iterator itr;

	for(itr = ilist.begin(); itr!= ilist.end(); itr++)
		cout << *itr << ' ';
		
	cout<<endl;

	return 0;
}
