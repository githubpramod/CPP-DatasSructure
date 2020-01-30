#include<iostream>
using namespace std;
auto pFunc = [](double a, double b) -> double {
	if(b==0.0)
		return 0;
	return a/b;
};
void test(void(*greed)(string)) {
	greed("Grred Function");
}

void runDivide(double(*divide)(double a,double b)){
	auto rVal=divide(5,2);
	cout<<rVal<<endl;
}

int main(int argc, char**) {
	auto pGreet= [](string name){cout<<"Hello from Lambda!!!"<<endl;};
	pGreet("Hello from Lambda Assign!!");
	test(pGreet);

	cout<<pFunc(10.0, 9.0)<<endl;
	cout<<pFunc(5.0,2.0)<<endl;
	runDivide(pFunc);

	return 0;
}
