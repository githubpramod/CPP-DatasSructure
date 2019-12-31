#include<iostream>
//explicit and mutable:they both modify class members,The explicit keyword
//relates to data conversion, but mutable has a more subtle purpose.
using namespace std;

class time24 {
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		time24():hours(0),minutes(0),seconds(0){}
		time24(int hh, int mm, int ss):hours(hh),minutes(mm),seconds(ss){}
		void display() const {
			if(hours < 10) cout << '0';
			cout << hours << ':';
			if(minutes < 10) cout << '0';
			cout << minutes << ':';
			if(seconds < 10) cout << '0';
			cout << seconds << ':';
		}
		int getHrs() const {return hours;}
		int getMinutes() const {return minutes;}
		int getSeconds() const {return seconds;}
};
class time12 {
	private:
		bool pm;
		int hrs;
		int mins;
	public:
		time12(): pm(true), hrs(0), mins(0) {}
		time12(bool pp, int h, int m): pm(pp), hrs(h), mins(m){}
		time12(time24);
		void display() const {
			cout<<hrs<<':';
			if(mins<10) cout <<'0';
			cout<<mins<<' ';
			string am_pm = pm? "p.m. " : "a.m. ";
			cout<<am_pm;
		}

};
time12::time12(time24 t24){
	int hrs24=t24.getHrs();
	pm = t24.getHrs()<12?false:true;
	mins = (t24.getSeconds()<30) ? t24.getMinutes():t24.getMinutes()+1;
	if(mins==60){
		mins=0;
		++hrs24;
		if(hrs24==12 || hrs24==24)
			pm=(pm==true)?false:true;
	}
	hrs= (hrs24<13) ? hrs24 : hrs24-12;
	if(hrs==0){
		hrs=12;pm=false;
	}
}


int main(int argc, char** argv) {
	int h, m, s;
	while(true){
		cout<<"Enter the 24 hours time:"<<endl;
		cout<<" Hours 0 to 24 : \n"; cin>>h;
		if(h>23){
			return 1;
		}
		cout<<"Minutes: ";cin>>m;
		cout<<"Seconds: ";cin>>s;

		time24 t24(h,m,s);
		cout<<"Enterd time: \n";
		t24.display();
		cout<<endl;
		time12 t12 = t24;

		t12.display();
		cout<<endl;
	}
	return 0;
}
