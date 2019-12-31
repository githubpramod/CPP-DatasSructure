#include<iostream>
using namespace std;

class panildrome{
	private:
		unsigned int digit;
		unsigned int rev_number;
	public:
		panildrome(unsigned int pan = 0) {this->digit = pan; }
		~panildrome() {}

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

int main(int argc, char** argv) {

	panildrome pd;
	unsigned int rev=0,num=0;
	cout<<"give the number!!"<<endl;
	cin>>num;
	cout<<endl;
	pd.reverseDigits(num);
	rev=pd.getNumber();//<<endl;//? cout<<"Panildrome\n": cout<<"Not panildrome\n";
	if(rev==num)
		cout<<"Panildrome\n"<<endl;
	else
		cout<<"Not Panildrome\n"<<endl;
	return 0;
}
