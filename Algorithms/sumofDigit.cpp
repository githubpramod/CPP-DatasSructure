#include<iostream>
using namespace std;

class sumofDigit {

	private:
		unsigned int sumDigit;
	public:
		sumofDigit(unsigned int digit = 0) {sumDigit = digit;}
		~sumofDigit() {}

		void sumDigits(unsigned int num) {
			unsigned int sum = 0;
			while(num != 0) {
				sum += num % 10;
				num /= 10;
			}
			sumDigit = sum;
			cout<<sum<<endl;
		}
		
		int getSumofDigit() const {return sumDigit;}
};

int main(int argc, char** argv) {

	sumofDigit sd;
	unsigned int num = 0;
	cout <<"Enter the digit"<<endl;
	cin>>num;

	sd.sumDigits(num);
	cout<<sd.getSumofDigit()<<endl;

	return 0;
}
