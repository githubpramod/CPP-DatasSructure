/*
 *You can think of vectors as smart arrays. They manage storage allocation for you, expanding
and contracting the size of the vector as you insert or erase data. You can use vectors much like
arrays, accessing elements with the [] operator. Such random access is very fast with vectors.
t’s also fast to add (or push) a new data item onto the end (the back) of the vector. When this
happens, the vector’s size is automatically increased to hold the new item.
 * */

#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv) {

	vector<int> v;
	
	v.push_back(10);
	v.push_back(350);
	v.push_back(564);
	v.push_back(657);

	for(int i = 0; i < v.size(); i++)
		cout<< v[i] << ' ';
	cout<<endl;

	v[1] = 367;
	v[3] = 232;

	for(int i = 0; i < v.size(); i++)
		cout<< v[i] << ' ';

	cout<<endl;


	return 0;
}
