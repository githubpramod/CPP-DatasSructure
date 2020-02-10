#include<iostream>
#include<list>
using namespace std;

int main(int argc, char** argv) {

	list<int> List {100,200,300,400,500,600,700,800,900};
	list<int> th {99,99,99,399,499,599,699,799,899};

	List.merge(th);

	cout << "List size: " << List.size() <<endl;
	cout << "TH size: " << th.size() <<endl;

	for(auto i = List.begin();i!=List.end();++i) {
		cout << *i << " ";
	}
	cout<<endl;

	List.unique();

	for(auto a = List.begin(); a != List.end(); ++a) {
		cout << *a << " ";
	}
	cout<<endl;

	return 0;
}
