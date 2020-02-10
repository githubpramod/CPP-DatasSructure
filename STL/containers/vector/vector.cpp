#include<iostream>
#include<vector>
#include<exception>
using namespace std;

template<typename T>
void print(const vector<T>& vec) {
	cout<<"Used:" <<vec.size() << "/" << vec.capacity()
		<< "Max size: " <<vec.max_size() <<endl;

	for(const T& t : vec) {
		cout << t << " ";
	}
	cout<<endl;
}
int main(int argc, char** argv) {

	vector<int> nums;
	vector<string> String {"John","Andrea","Daniel","Dennis","Jokhim"};
	
	nums.push_back(100);
	nums.push_back(200);
	nums.push_back(300);
	String.push_back("Roland");

	cout<<"Num size:" <<nums.size() <<endl;
	cout<<"Num Capacity: " <<nums.capacity() <<endl;
	cout<<"String size: " <<String.size() <<endl;
	cout<<"String Capacity: " <<String.capacity() <<endl;

	print(nums);
	print(String);

	String.resize(3);
	print(String);
	String.resize(10, "HELLO");
	print(String);

	nums[0] = 999;
	print(nums);

	nums.push_back(400);
	nums.push_back(500);
	print(nums);

	for (int* p = &nums[0]; p < (&nums[0] + nums.size()); ++p) {
		cout << *p << "\n";
	}

	cout<<nums[100]<<endl;

	try {
		cout<<nums.at(100)<<endl;
	}catch(out_of_range& e) {
		cerr<<e.what()<<endl;
	}

	cout << "front " << nums.front() << " and back " << nums.back() << "\n";
	nums.clear();

	return 0;
}
