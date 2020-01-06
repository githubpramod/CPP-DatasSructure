#include<iostream>
using namespace std;

class ArmstrongNumber {
	private:
		unsigned int num;
	public:
		ArmstrongNumber() : num(0) {}
		ArmstrongNumber(unsigned int val) : num(val) {}
		void setNumber(unsigned int val) {num = val; }
		void ArmstrongNumbers(unsigned int val) {
			
			unsigned int sum = 0,rem = 0;
			num = val;
			cout<<val<<endl;
			while(val != 0){
			rem = 	val % 10;
			sum += rem * rem * rem;
			val /= 10;
			}
			
			if( sum == num)
				cout<<"Number is Armstrong!"<<endl;
			else
				cout<<"Number not Armstrong!"<<endl;

		}
};

int main(int argc, char** argv) {
	
	ArmstrongNumber an;
	unsigned int num;
	cout<<"Enter the number: ";
	cin>>num;
	an.ArmstrongNumbers(num);

	return 0;
}
