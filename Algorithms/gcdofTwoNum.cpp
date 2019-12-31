#include<iostream>
using namespace std;

class gcdofTwoNum {

	private:
	public:
		gcdofTwoNum(){}
		~gcdofTwoNum(){}

		int findGCD(unsigned int a, unsigned int b) {
		
			if(b == 0) return a;
			return findGCD(b, a%b);
		}
};

int main(int argc, char** argv) {

	gcdofTwoNum gcd;
	unsigned int a=0,b=0;
	cout<<"Enter two numbers!!\n"<<endl;
	cin>>a>>b;
	cout<<gcd.findGCD(a,b)<<endl;

	return 0;
}
