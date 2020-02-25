#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test{
private:
	static const int SIZE = 100;
	int *_pBuffer;
public:
	Test(){
		cout<<"Constructer!"<<endl;
		_pBuffer=new int[SIZE]{};
	}
	Test(int i) {
		cout << "parameterized constructor" << endl;
		_pBuffer = new int[SIZE] { };

		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = 7 * i;
		}
	}
	Test(const Test &other) {
		cout << "copy constructor" << endl;

		_pBuffer = new int[SIZE] { };

        // alternate way to copy buffer.
        //std::copy(other._pBuffer, other._pBuffer + SIZE, _pBuffer);
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}
	Test &operator=(const Test &other) {
		cout << "assignment" << endl;
		_pBuffer = new int[SIZE] { };

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
	}
	~Test() {
		cout << "destructor" << endl;

		delete[] _pBuffer;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};
ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}
int main(int argc, char** argv) {
	cout << "!!!ConstructorsandMemory!!!" << endl; // prints !!!ConstructorsandMemory!!!
	Test test1 = getTest();

	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());
	return 0;
}