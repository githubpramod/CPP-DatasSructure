#include<iostream>
#include<memory.h>
#include<vector>
using namespace std;

class Test {
	private:
		static const int SIZE = 100;
		int* __pBuffer;
	public:
		Test() {
			cout<<"Constructer!"<<endl;
			__pBuffer = new int[SIZE];
		}
		Test(int size) {
			cout<<"Parametrized Constructer!"<<endl;
			__pBuffer = new int[SIZE];

			for(int i=0;i<SIZE;i++)
				__pBuffer[i] = i*i;
		}
		Test(const Test& th) {
			cout<<"Copy Constructer!!"<<endl;
			__pBuffer = new int[SIZE];

			memcpy(__pBuffer, th.__pBuffer,SIZE*sizeof(int));
		}
		Test& operator=(const Test& th){
			cout<<"Assignment "<<endl;
			__pBuffer = new int[SIZE];
			memcpy(__pBuffer, th.__pBuffer,SIZE*sizeof(int));
			return *this;
		}
		~Test() {
			cout<<"Destructer!!"<<endl;
			delete __pBuffer;
		}
		friend ostream& operator<<(ostream& out, const Test& th);
};

ostream& operator<<(ostream& out, const Test& th) {
	out<<"Hello from Test";
	return out;
}
Test getTest(){
	return Test();
}
int main(int argc, char** argv) {
	Test test = getTest();
	cout<<test<<endl;
	vector<Test> vtest;
	vtest.push_back(Test());
	int val = 6;
	int* pVal = &val;
	Test* pTest = &test;

	int* pVal1 = &++val;
	cout<<pVal<<endl;

	return 0;
}
