#include<iostream>
#include<fstream>
using namespace std;

class person {
	private:
		int age;
		char name[40];
	public:
		void getData() {
		cout<<"Enter Name: ";cin>>name;
		cout<<"Enter Age: ";cin>>age;
		}
		void showData() {
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

int main(int argc, char** argv) {

	person ps;
	//ps.getData();

	ifstream inObj("personObj.dat",ios::binary);

	inObj.read(reinterpret_cast<char*>(&ps),sizeof(ps));
	ps.showData();

	return 0;
}
