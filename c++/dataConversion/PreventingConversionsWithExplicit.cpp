#include<iostream>
using namespace std;
/*
 * There may be some specific conversions you have decided are a good thing, and you’ve taken
steps to make them possible by installing appropriate conversion operators and one-argument
constructors, as shown in the TIME 1 and TIME 2 examples. However, there may be other conversions
that you don’t want to happen. You should actively discourage any conversion that you don’t
want. This prevents unpleasant surprises.
It’s easy to prevent a conversion performed by a conversion operator: just don’t define the
operator. However, things aren’t so easy with constructors. You may want to construct objects
using a single value of another type, but you may not want the implicit conversions a one-
argument constructor makes possible in other situations. What to do?
Standard C++ includes a keyword, explicit , to solve this problem. It’s placed just before the
declaration of a one-argument constructor. The EXPLICIT example program (based on the
ENGLCON program) shows how this looks.
 * */
class Distance {
	private:
		const float MTF;
		int feet;
		int inches;
	public:
		Distance() : feet(0), inches(0), MTF(3.280833F) {}
		explicit Distance(float meters) : MTF(3.280833F) {
			float fltfeet = MTF * meters;
			feet = int(fltfeet);
			inches = 12*(fltfeet-feet);
		}
		void showDist() const {
			cout<<feet<<"-"<<inches<<endl;
		}
};

void distance(Distance distt) {
	cout<<"in feet and inches"<<endl;
	distt.showDist();
	cout<<endl;
}

int main(int argc, char** argv) {
	Distance dist1(1.0);
	dist1.showDist();

	//Distance dist2 = 1.0F;// error because of explicit
	//cout<<"Dist1"<<endl;
	//dist2.showDist();

	float mtrs = 1.0F;
	cout<<"Function call"<<endl;
	//distance(mtrs); //error because of exlicit
	return 0;
}
