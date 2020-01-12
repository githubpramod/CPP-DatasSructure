#include<iostream>
#include<fstream>
using namespace std;

class person {
	private:
		int age;
		char name[40];
	public:
		void getData() {
		cout<<"\nEnter Name: ";cin>>name;
		cout<<"\nEnter Age: ";cin>>age;
		}
		void showData() {
			cout<<"\nName: "<<name<<endl;
			cout<<"\nAge: "<<age<<endl;
		}
};

int main(int argc, char** argv) {
	char ch;
	person ps;
	fstream file;

	file.open("MultiObj.dat",ios::app|ios::out|ios::in|ios::binary);

	do {
		cout<<"\nEnter person data:";
		ps.getData();
		file.write(reinterpret_cast<char*>(&ps),sizeof(ps));
		cout<<"\nEnter another person (y/n)? ";
		cin>>ch;
	}while(ch=='y');
	file.seekg(0);
	
	file.read(reinterpret_cast<char*>(&ps),sizeof(ps));

	while(!file.eof()) {
		cout<<"\nPerson: ";
		ps.showData();
		file.read(reinterpret_cast<char*>(&ps),sizeof(ps));
	}

	cout<<endl;

	return 0;
}
