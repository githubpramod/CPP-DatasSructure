#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << "!!!InitializationinC++11!!!" << endl; // prints !!!InitializationinC++11!!!

	int value{5};
	cout<<value<<endl;

	string test{"hello"};
	cout<<test<<endl;

	int numbers[]{1,2,3};
	cout<<numbers[1]<<endl;

	int *pInt = new int[3]{1,2,3};
	cout<<pInt[2]<<endl;
	delete pInt;

	int *pSomething{&value};
	cout<<*pSomething<<endl;

	vector <string> strings{"one","two","three"};
	cout<<strings[2]<<endl;

	return 0;
}
