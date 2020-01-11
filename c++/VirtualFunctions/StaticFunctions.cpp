/*
 *a static data member is not duplicated for each object; rather a single
data item is shared by all objects of a class.
 *
 *
 * Let’s extend this concept by showing how functions
as well as data may be static .
This allows you to query an object to
find out which object it is—a capability that is sometimes useful in debugging a program,
among other situations.

 * */

#include<iostream>
using namespace std;

class gamma {
	private:
		static int total;
		int id;
	public:
		gamma() {total++; id=total;}
		~gamma() {total--; cout<<"Destroyed ID: "<<id<<endl; }
		static void showTotal() {cout<<"Total is: "<<total<<endl; }
		void showId() {cout<<"ID number: "<<id<<endl;}
};
int gamma::total=0;

int main(int argc, char** argv) {
	gamma g1;
	gamma::showTotal();

	gamma g2,g3;
	gamma::showTotal();

	g1.showId();
	g2.showId();
	g3.showId();
	cout<<"-------------------END-----------------------"<<endl;
	return 0;
}
