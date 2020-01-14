/*
 *What happens if the application needs more information about what caused an exception? For
instance, in the XDIST example, it might help the programmer to know what the bad inches
value actually was. Also, if the same exception is thrown by different member functions, as it
is in XDIST , it would be nice to know which of the functions was the culprit. Is there a way to
pass such information from the member function, where the exception is thrown, to the appli-
cation that catches it?
You can answer this question if you remember that throwing an exception involves not only
transferring control to the handler, but also creating an object of the exception class by calling
its constructor. In XDIST , for example, we create an object of type InchesEx when we throw the
exception with the statement
throw InchesEx();
If we add data members to the exception class, we can initialize them when we create the
object. The exception handler can then retrieve the data from the object when it catches the
exception. It’s like writing a message on a baseball and throwing it over the fence to your
neighbor.
 *
 * */
#include <iostream>
#include <string>
using namespace std;
class Distance {
	private:
		int feet;
		float inches;
	public:
		class InchesEx {
			public:
				string origin;
				float iValue;
				InchesEx(string orr, float in) {
					origin = orr;
					iValue = in;
				}
		};

		Distance() { feet = 0; inches = 0.0; }
		Distance(int ft, float in) {
			if(in >= 12.0)
				throw InchesEx("2-arg constructor", in);
			feet = ft;
			inches = in;
		}
		void getdist() {
			cout << "\nEnter feet: "; cin >> feet;
			cout << "Enter inches: "; cin >> inches;
			if(inches >= 12.0)
				throw InchesEx("getdist() function", inches);
		}
		void showdist() { cout << feet << "\'-" << inches << '\"'; }
};
int main(int argc, char** argv) {
	try {
		Distance dist1(17, 13.5);
		Distance dist2;
		dist2.getdist();
		cout << "\ndist1 = "; dist1.showdist();
		cout << "\ndist2 = "; dist2.showdist();
	} catch(Distance::InchesEx ix) {
		cout << "\nInitialization error in " << ix.origin
			<<".\n inches value of "<< ix.iValue
			<<" is too large.";
	}
	cout << endl;

	return 0;
}
