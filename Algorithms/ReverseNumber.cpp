#include<iostream>

using namespace std;

class reverseNumber {
	private:
		unsigned int digit;
	public:
		reverseNumber(unsigned int val = 0) {digit = val;}
		int reverseDigits(unsigned int val) {
		
			static unsigned int rev_num = 0;
			static unsigned int base_position = 1;
			if(val > 0) {
			
				reverseDigits(val / 10);
				rev_num += (val % 10) * base_position;
				base_position *= 10;
			}
			digit = rev_num;
		}
		unsigned int getNumber() const { return digit; }
};

int reverseDigits(unsigned int digit) {
	static unsigned int rev_num = 0;
	static unsigned int base_position = 1;
	if(digit > 0){ 
		reverseDigits(digit/10); 
		rev_num += (digit%10)*base_position; 
		base_position *= 10;
	}
	return rev_num;
}

int main (int argc, char** argv) {
	
	reverseNumber rs;
	unsigned int digit = 12356789;
	cout<<"original digit "<<digit<<endl;
	digit = reverseDigits(digit);
	cout << "reverse digit " <<digit<<endl;
	
	rs.reverseDigits(digit);
	cout<<"again reverse number by object " <<rs.getNumber() <<endl;
	return 0;
}
