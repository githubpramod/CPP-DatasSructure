#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv) {

	int array[] = {1,2,3,4,5,6,7};
	vector<int> v(array,array+7);

	cout<<"Original vector!!!"<<endl;
	for(int i=0; i<v.size();i++)
		cout<<v[i]<<' ';
	cout<<endl;

	v.insert(v.begin(),9);
	v.insert(v.begin()+4,11);
	v.insert(v.end(),132);
	cout<<"Aftre insertion!!!!!"<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<' ';
	cout<<endl;
	v.erase(v.begin()+1);
	//v.erase(v.end());

	cout<<"AFtre erase!!!!"<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<' ';
	cout<<endl;

	return 0;
}
