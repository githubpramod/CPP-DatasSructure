#include<iostream>
using namespace std;

class Distance {
	private:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0.0) {}
		Distance(int feetVal, float inchesVal) : feet(feetVal), inches(inchesVal) {}
		void getDistance() {
			cout<<"Enter Feet: "; cin >>feet;
			cout<<"Enter Inches "; cin >>inches;
		}
		void showDist() {
			cout<<feet << " " <<inches <<endl;
		}
		Distance operator +(Distance) const;/*{
			int f = feet + d.feet;
			float i = inches + d.inches;
			if(i > 12.0){
				i-=12.0;
				f++;
			}
			return Distance(f,i);
		}*/
};

Distance Distance :: operator +(Distance d) const {
	int f = feet + d.feet;
	float i = inches + d.inches;
	if(i > 12.0){
		i-=12.0;
		f++;
	}
	return Distance(f,i);
}

int main(int argc, char** argv) {
	Distance d1,d2,d3;
	d1.getDistance();
	//d1.showDist();
	Distance d4(11,6.25);
	d2 = d1 + d4;
	d3 = d1 + d2 + d4;
	cout <<"distance 1 "; d1.showDist(); cout<<endl;
	cout <<"distance 2 "; d2.showDist(); cout<<endl;
	cout <<"distance 3 "; d3.showDist(); cout<<endl;
	cout <<"distance 4 "; d4.showDist(); cout<<endl;
	return 0;
}
