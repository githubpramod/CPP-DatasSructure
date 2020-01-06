#include<iostream>
using namespace std;
const int length = 100;

class employee {
	private:
		char name[length];
		unsigned long number;
	public:
		void getData() {
			cout<<"\nEnter the last name "; cin>>name;
			cout<<"\nEnter the number "; cin>>number;
		}
		void putData() const{
			cout<<"\n Name: " <<name;
			cout<<"\n Number " <<number;
		}
};

class manager : public employee {
	private:
		char title[length];
		double dues;
	public:
		void getData() {
			employee::getData();
			cout<<"\n Enter the title: "; cin>>title;
			cout<<"\n Enter the dues: "; cin>>dues;
		}
		void putData() const{
			employee::putData();
			cout<<"\n title: "<<title;
			cout<<"\n dues: "<<dues;
		}
};

class scientist : public employee {
	private:
		int publications;
	public:
		void getData() {
			employee::getData();
			cout<<"\n Enter the no. of publication: "; cin>>publications;
		}
		void putData() const{
		
			cout<<"\n Number of publications: "<<publications;
		}
};

class leborer : public employee {
	private:
	public:
};
class foreman : public leborer {
	private:
			float quotas; 
	public:
			void getdata(){
				leborer::getdata();
				cout << "Enter quotas: "; cin >> quotas;
			}
			void putdata() const {
				leborer::putdata();
				cout << "\nQuotas: " << quotas;
			}
};
int main(int argc, char** argv) {
	manager m1,m2;
	scientist s1;
	leborer l1;
	foreman f1;

	cout << "\nEnter data for manager 1";
	m1.getData();
	cout << "\nEnter data for manager 2";
	m2.getData();
	cout << "\nEnter data for scientist ";
	s1.getData();
	cout << "\nEnter data for laborer ";
	l1.getData();
	cout << "\nEnter data for foreman ";
	l1.getData();
	
	cout << "\nData on manager 1";
	m1.putData();
	cout << "\nData on manager 2";
	m2.putData();
	cout << "\nData on scientist ";
	s1.putData();
	cout << "\nData on foreman ";
	f1.putData();

	return 0;
}
