#include<iostream>
using namespace std;
enum posneg{ pos, neg };
class Distance {
	protected:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0.0F) {}
		Distance(int ft, float inchs) : feet(ft), inches(inchs) {}
		void getDist() {
			cout<<"\nEnter feet"; cin>>feet;
			cout<<"\nEnter inches"; cin>>inches;
		}
		void showDist() const { cout<<"Feet : "<<feet<<endl;cout<<"Inches : "<<inches<<endl;}
};

class DistSign : public Distance {
	private:
		posneg sign;
	public:
		DistSign (): Distance() { sign = pos;}
		DistSign (int ft, float inch, posneg sg = pos) : Distance(ft,inch) { sign = sg; }
		void getDist () {
			Distance :: getDist();
			char ch;
			cout<<"Enter sign (+ or -): "; cin>>ch;
			sign = (ch == '+') ? pos : neg;
		}	
		void showDist() const {
			cout<< ((sign == pos)? "(+)":"(-)");
			Distance::showDist();
		}
};

int main(int argc, char** arcv) {
	DistSign dist1;
	dist1.getDist();
	dist1.showDist();

	DistSign dist2(11, 6.25);
	DistSign dist3(100, 5.5, neg);

	cout << "\ndist2 = "; dist2.showDist();
	cout << "\ndist3 = "; dist3.showDist();


	cout << endl;

	return 0;
}
