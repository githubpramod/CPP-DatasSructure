#include<iostream>
using namespace std;

class cinAndCout {

	private:
		int real;
		int img;
	public:
		cinAndCout(int r=0, int i=0) : real(r), img(i) {}
		friend istream& operator >> (istream &in, cinAndCout &c);
		friend ostream& operator << (ostream &out, cinAndCout &c);
};
		istream& operator >> (istream &in, cinAndCout &c){
			cout<<"Enter the real value! "<<endl;
			in>>c.real;
			cout<<"Enter the img value! "<<endl;
			in>>c.img;
			return in;
		}
		ostream& operator << (ostream &out, cinAndCout &c){
			out<<c.real;
			out<<"+i"<<c.img<<endl;
			return out;
		}
int main(int argc, char** argv) {

	cinAndCout cc;
	cin>>cc;
	cout<<"The complex value is: ";
	cout<<cc;
	return 0;
}
