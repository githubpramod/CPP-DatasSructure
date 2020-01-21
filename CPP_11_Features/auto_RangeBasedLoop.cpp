#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(int argc, char** argv) {

	// char text[] = {"one","two","three","four"};
	// in c++11
	auto texts = {"one","two","three","four","five"};
	for(auto text:texts)
		cout<< text <<endl;
	vector<int> numbers;
	
	numbers.push_back(5);
	numbers.push_back(6);
	numbers.push_back(7);
	for(auto number:numbers)
		cout << number <<endl;

	string hello = "hello";
	for(auto c:hello)
		cout << c << endl;


	return 0;
}
