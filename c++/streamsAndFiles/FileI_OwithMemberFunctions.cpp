#include<iostream>
#include<fstream>
using namespace std;

class person {
	private:
		char name[50];
		short age;
	public:
		void getData() {
			cout<<"\nEnter NAme: "; cin>>name;
			cout<<"\nEnter Age: ";cin>>age;
		}
		void showData() {
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
		void diskIn(int);
		void diskOut();
		static int diskCount();
};

void person::diskIn(int a) {
	ifstream infile;
	infile.open("PersonFileData.dat",ios::binary);
	infile.seekg(a*sizeof(person));
	infile.read((char*)this,sizeof(*this));
}
void person::diskOut() {
	ofstream outfile;
	outfile.open("PersonFileData.dat",ios::app|ios::binary);
	outfile.write((char*)this,sizeof(*this));
}
int person::diskCount() {
	ifstream infile;
	infile.open("PersonFileData.dat",ios::binary);
	infile.seekg(0,ios::end);
	return (int)infile.tellg()/sizeof(person);
}

int main(int atgc, char** argv) {

	person ps;
	char ch;
	do {
		cout<<"/nEnter data: ";
		ps.getData();
		ps.diskOut();
		cout<<"Want to another data(y/n)? ";
		cin>>ch;
	} while(ch=='y');

	int n = person::diskCount();
	cout<<n<<" : Persons in file\n";

	for(int y=0;y<n;y++) {
		cout<<"\nPerson "<<y;
		ps.diskIn(y);
		ps.showData();
	}
	return 0;
}
