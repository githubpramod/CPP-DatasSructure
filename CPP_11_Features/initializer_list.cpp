#include <iostream>
#include <vector>
using namespace std;

class Test{
public:
	Test(initializer_list<int> texts){
		for(auto text:texts){
			cout<<text<<endl;
		}
	}
	Test(initializer_list<string> texts){
		for(auto text:texts){
			cout<<text<<endl;
		}
	}
	void print(initializer_list<string> texts){
		for(auto text:texts){
			cout<<text<<endl;
		}
	}
};

int main(int argc, char** argv) {
	cout << "!!!IInitializerLists!!!" << endl;

	vector<int> numbers{ 1, 3, 4, 6 };
	cout << numbers[2] << endl;

	Test test{"oOne","two","three"};
	test.print({ "one", "two", "three", "four" });

	Test test2{1,2,3};


	return 0;
}

