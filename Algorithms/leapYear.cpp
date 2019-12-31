#include<iostream>
using namespace std;

class leapYear {
	private:
		unsigned int year;
	public:
		leapYear(unsigned int year = 0) {this->year = year;}
		~leapYear() {}
		bool findLeapYear(unsigned int lyear) {
			year = lyear;
			return (((year%4==0)&&(year%100!=0))||(year%400==0));
		}

};

int main(int argc, char** argv) {


	leapYear ly;
	unsigned int year=0;
	cout<<"Pass the year!!"<<endl;
	cin>>year;
	cout<<endl;
	ly.findLeapYear(year)? cout<<"Leap Year\n":cout<<"Not Leap Year\n";

	return 0;
}
