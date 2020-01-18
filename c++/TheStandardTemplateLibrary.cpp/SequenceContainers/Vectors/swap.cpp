#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv) {
	float array[] = { 2.3, 5.6, 7.6, 8.9 };
	vector<float> v1(array, array+4);
	vector<float> v2(4);

	for (int i=0; i < v1.size(); i++)
		cout<<v1[i]<<' ';
	cout<<endl;
	for (int i=0; i < v2.size(); i++)
		cout<<v2[i]<<' ';
	cout<<endl;

	v1.swap(v2);

	for(int i=0; i<v2.size(); i++)
		cout<<v2[i]<<' ';
	cout<<endl;

	v2.pop_back();

	for(int i=0; i<v2.size();i++)
		cout<<v2[i]<<' ';
	cout<<endl;
	
	return 0;
}
