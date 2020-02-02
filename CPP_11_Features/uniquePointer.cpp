/*Its a smart pointer: It handle deallocation memory problem.
 * */
#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}
};

class Temp {
private:
	unique_ptr<Test[]> pTest;

public:
	Temp(): pTest(new Test[2]) {

	}
};

int main(int argc, char** argv) {
	cout << "!!!UniquePointers!!!" << endl; // prints !!!UniquePointers!!!

	Temp temp;

	unique_ptr<Test[]> pTest(new Test[2]);

	pTest[1].greet();

	cout << "Finished" << endl;

	return 0;
}
//unique_ptr<T> myPtr(new T);       // Okay
//unique_ptr<T> myOtherPtr = myPtr; // Error: Can't copy unique_ptr

//unique_ptr<T> myPtr(new T);                  // Okay
//unique_ptr<T> myOtherPtr = std::move(myPtr); // Okay, resource now stored in myOtherPtr


//shared_ptr<T> myPtr(new T);       // Okay
//shared_ptr<T> myOtherPtr = myPtr; // Sure!  Now have two pointers to the resource.


