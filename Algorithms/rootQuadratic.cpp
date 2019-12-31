#include<iostream>
#include<math.h>
using namespace std;

class rootQuadretic {
	private:
		double var_a;
		double var_b;
		double var_c;
		double root1;
	    double root2;
		double real;
		double img;
		double discriminant;
	public:
		rootQuadretic(double vala = 0, double valb = 0, double valc = 0) {
			var_a=vala;var_b=valb;var_c=valc;
		}
		~rootQuadretic() {}

		void findRoots(double val1, double val2, double val3) {
			var_a = val1; var_b = val2; var_c = val3;
			discriminant = ((var_b * var_b) - (4 * var_a *var_c));
			cout<<"Discriminant = "<<discriminant<<endl;	
			if(discriminant == 0) {
       			root1 = root2 = -var_b / (2 * var_a);
				cout<<"root1 = root2 = "<< root1 <<endl;
			}else if(discriminant > 0) {
				root1 = (-var_b + sqrt(discriminant)) / (2 * var_a);
        		root2 = (-var_b - sqrt(discriminant)) / (2 * var_a);
       			cout<<"root1 = " << root1 <<"and root2 = "<<  root2 <<endl;
			}else {
				real = -var_b / (2 * var_a);
        		img = sqrt(-discriminant) / (2 * var_a);
				cout<<"root1 = "<<real<<"+"<<img<<"i"<<endl;
				cout<<"root2 = "<<real<<"-"<<img<<"i"<<endl;
			}
		}
};

int main(int argc, char** argv) {

	rootQuadretic rq;
	double_t a=0,b=0,c=0;
	cout<<"pass the vale of a,b and c" <<endl;
	cin>>a>>b>>c;
	rq.findRoots(a,b,c);

	return 0;
}
