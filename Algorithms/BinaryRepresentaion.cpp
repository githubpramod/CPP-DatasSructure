#include<iostream>
using namespace std;

class BinaryRepresentaion {
	private:
		unsigned NUM;
	public:
		BinaryRepresentaion() : NUM(0) {}
		BinaryRepresentaion(unsigned num) : NUM(num) {}
		void showBin(unsigned n) {
			//cout<<"Enter the number! "; cin>>NUM;
			for(unsigned i = 1<<31; i>0; i=i/2) {
				(n&i)? cout<<'1':cout<<'0';
			}
			cout<<endl;
		}
		void bin(unsigned n){ 
			if (n > 1) 
				bin(n>>1); 
      
			cout<< (n & 1); 
		}
};

int main(int argc, char** argv) {
	
	BinaryRepresentaion br;
	br.showBin(7);
	//br.bin(7);

	return 0;
}
