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
};

int main(int argc, char** argv) {

	person ps;
	ps.getData();

	ofstream outObj("personObj.dat",ios::binary);

	outObj.write(reinterpret_cast<char*>(&ps),sizeof(ps));

	return 0;
}
