#include <iostream>
#include <list>
using namespace std;
int main(int argc, char** argv) {
	int j;
	list<int> list1, list2;
	int arr1[] = { 40, 30, 20, 10 };
	int arr2[] = { 15, 20, 25, 30, 35 };
	for(j=0; j<4; j++)
		list1.push_back( arr1[j] );

	for(j=0; j<5; j++)
		list2.push_back( arr2[j] );

	for(int i=0;i<list1.size();i++)
		cout<<++list<<' ';
	cout<<endl;
	list1.reverse();
	list1.merge(list2);
	list1.unique();
	int size = list1.size();
	while( !list1.empty() ) {
		cout << list1.front() << ' ';
		list1.pop_front();
	}
	cout << endl;

	return 0;
}
