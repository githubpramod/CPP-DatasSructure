#include<iostream>
using namespace std;

int main(int argc, char** argv) {

	int cats = 5;
	[cats](){cout<<cats<<endl;};
	return 0;
}()
