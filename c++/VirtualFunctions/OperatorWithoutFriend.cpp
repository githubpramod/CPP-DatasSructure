#include<iostream>
using namespace std;

class Distance {
	private:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0.0) {}
		Distance(float fltFeet) {
			feet = static_cast<int>(fltFeet);
			inches = 12 * (fltFeet-feet);
		}
		Distance(int ft, float inch) {feet = ft; inches = inch; }
		void showDist() {cout<<feet<<"ft:"<<inches<<"ich\n"; }
		Distance operator +(Distance dist);


};

Distance Distance :: operator+(Distance dist) {
	 int ff = feet + dist.feet;
         float inc = inches + dist.inches;
	 if(inc>=12.0) {inc -= 12.0; ff++;}
	 return Distance(ff, inc);
}

int main(int argc, char** argv) {

	Distance d1 = 2.5;
	Distance d2 = 1.25;

	Distance d3;
	cout << "\nd1 = "; d1.showDist();
	cout << "\nd2 = "; d2.showDist();

	d3 = d1 + 10.0;
	cout << "\nd3 = "; d3.showDist();
	// d3 = 10.0 + d1;
	// cout << "\nd3 = "; d3.showDist();

	return 0;
}
