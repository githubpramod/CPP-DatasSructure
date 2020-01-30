#include <iostream>
using namespace std;

void test(void(*pFunc)()){
	pFunc();
}

int main(int argc, char** argv) {
	cout << "!!!IntroducingLambdaExpression!!!" << endl;
	[](){};//default lambda expression
	[](){cout<<"hello Lambda!"<<endl;};//will not be printed
	
	auto func = [](){cout<<"hello func Lambda!"<<endl;};
	func();

	//[](){cout<<"hello Lambda 123!"<<endl;};

	test(func);

	test([]() {cout << "hello again!" << endl;});

	return 0;
}
