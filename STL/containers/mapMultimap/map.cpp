#include<iostream>
#include<map>
using namespace std;

struct Sample {

		int x;
		int y;
		string z;
		Sample() : x(10), y(20), z("Sample") {}
		Sample(int x, int y, const string& z) : x(x), y(y), z(z) {}
};
int main(int argc, char** argv) {

	map<string,string> sMap;
	sMap.insert({"hello","John"});
	cout<<sMap["hello"]<<endl;

	map<string, Sample> mObj;

	mObj.insert(pair<string,Sample>("first",Sample(2,3,"Hi First Obj")));
	mObj["second"] = Sample();
	mObj["second"] = Sample(0,0,"overwritten");
	mObj["third"] = Sample(1,3,"thirdobjs");
	mObj.insert({"fourth",Sample(4,4,"fourthObjs")});

	const auto [iterator, inserted] = mObj.insert({"third",Sample()});
	if(inserted) {
		cout << "Inserted!!" << endl;
	} else {
		cout <<" Key exits!!"<< endl;
	}

	for(auto& x : mObj) {
		cout << x.first << " -> " << x.second.z << endl;
	}

	mObj.erase("second");
	cout << "Erased second" << endl;
	auto ptr = mObj.find("third");

	if (ptr == mObj.end()) {
		cout << "Unable to find third" << endl;
	 }else {
		mObj.erase(ptr, mObj.end());
		cout << "Erased from third to the end" << endl;
	}

	for (auto& x : mObj) {
		cout << x.first << " -> " << x.second.z << endl;
	}

	mObj.clear();
	cout << "objectMap length now: " << mObj.size() << endl;

	return 0;
}
