#include<iostream>
#include<string>
using namespace std;

class distance1 {
	private:
		int feet;
		float inches;
	public:
		distance1() : feet(0),inches(0.0) {}
		distance1(int f, float ich) : feet(f), inches(ich) {}
		friend istream& operator >>(istream& s, distance1& d);
		friend ostream& operator <<(ostream& s, distance1& d);
};

istream& operator >>(istream& s, distance1& d) {
	cout<<"\nEnter feet: "; s>>d.feet;
	cout<<"Enter inches: "; s>>d.inches;
	return s;
}
ostream& operator <<(ostream&s, distance1& d) {
	s<<d.feet<<"-"<<d.inches<<endl;
	return s;
}

int main(int argc, char** argv) {

	distance1 d1,d2;
	distance1 d3(10, 3.05);
	cout<<"\nEnter two distance value:";
	cin>>d1>>d2;

	cout<<"D1"<<d1<<endl;
	cout<<"D2"<<d2<<endl;
	cout<<"D3"<<d3<<endl;

	return 0;
}
