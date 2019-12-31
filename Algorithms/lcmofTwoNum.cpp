#include<iostream>
using namespace std;

class lcmofTwoNum {
	private:
	public:
		lcmofTwoNum() {}
		~lcmofTwoNum() {}
		int gcd(int a,int b) {
		
			if(b==0) return a;
			return gcd(b,a%b);
		}
		int findLcm(int a, int b) {
			return (a*b)/gcd(a,b);
		}
};

int main(int argc, char** argv) {

	lcmofTwoNum lcm;
	int a=0,b=0;
	cout<<"Enter two numbers!!"<<endl;
	cin>>a>>b;
	cout<<lcm.findLcm(a,b)<<endl;
	return 0;
}
