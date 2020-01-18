/*
 *An STL list container is a doubly linked list, in which each element contains a pointer not only
to the next element but also to the preceding one. The container stores the address of both the
front (first) and the back (last) elements, which makes for fast access to both ends of the list.
 * */
#include<iostream>
#include<list>
using namespace std;

int main(int argc, char** argv) {
	list<int> ilist;

	ilist.push_front(1);
	ilist.push_front(2);
	ilist.push_back(3);
	ilist.push_back(4);

	for(int i=0;i<ilist.size(); i++) {
		cout<<ilist.front()<<' ';
		ilist.pop_front();
	}
	cout<<endl;

	ilist.pop_front();
	ilist.pop_back();

	for(int i=0; i<ilist.size();i++) {
		cout<<ilist.front()<<' ';
		ilist.pop_front();
	}
	cout<<endl;

	return 0;
}
