#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
	static const int SIZE = 100;

	int *_pBuffer{nullptr};

public:
	Test() {
		_pBuffer = new int[SIZE] { };
	}

	Test(int i) {
		_pBuffer = new int[SIZE] { };

		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = 7 * i;
		}
	}

	Test(const Test &other) {
		_pBuffer = new int[SIZE] { };

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	Test(Test &&other) {
		cout << "Move constructor" << endl;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
	}

	Test &operator=(Test &&other) {
		cout <<"Move Assignement Operator!"<<endl;
		delete _pBuffer;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
		return *this;

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
	}

	~Test() {
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
	cout << "!!!MoveConstructer!!!" << endl; // prints !!!MoveConstructer!!!
	vector<Test> vec;
	vec.push_back(Test());
	return 0;
}
