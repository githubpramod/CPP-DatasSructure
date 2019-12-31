#include<iostream>
using namespace std;

class Distance {
	private:
		const float MTF;
		int feet;
		int inches;
	public:
		Distance() : feet(0), inches(0.0), MTF(3.280833F) {}
		Distance(float meter) : MTF(3.280833F) {
			float fltfeet = MTF * meter;
			feet = int(fltfeet);
			inches = 12 * (fltfeet - feet);
		}
		Distance(int ft, int inch) : feet(ft), inches(inch), MTF(3.280833F){}
		void getDist(){
			cout<<"Enter feet: "; cin>>feet;
			cout<<"Enter inches: "; cin>>inches;
		}
		void showDist() const {
			cout<<feet <<" Feets "<<inches<<" Inch "<<endl;
		}
		operator float() const {
			float fracfeet = inches/12;
			fracfeet +=static_cast<float>(feet);
			return fracfeet/MTF;
		}
};

int main(int argc, char** argv){
	float meters;
	Distance dist = 2.35F;
	cout<<"\ndist = "; dist.showDist();
	meters = static_cast<float>(dist);
	cout<<"\ndist = " <<meters<<endl;
	Distance dist1(5,10.25);
	meters = dist1;
	cout<<"\ndis1t = " <<meters<<endl;
	//dist1 = meters; error, it will not convert

	return 0;
}
