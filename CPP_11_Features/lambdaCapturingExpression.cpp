#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int one = 1;
    int two = 2;
    int three = 3;

	[=](){cout<<one<<":"<<two<<endl;}();//capture all local value variable
	[one,two](){cout<<one<<":"<<two<<endl;}(); //capture only one and two variable

	[one,two,&three](){cout<<one<<":"<<two<<":"<<three<<endl;}();
	[one,two,&three](){three=7;cout<<one<<":"<<two<<":"<<three<<endl;}();
	cout<<three<<endl;
	[&](){one=6;two=9;three=3;cout<<one<<":"<<two<<":"<<three<<endl;}();
	[&,one,two](){three=30;cout<<one<<":"<<two<<":"<<three<<endl;}();

	return 0;
}
