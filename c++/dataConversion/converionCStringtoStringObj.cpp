#include<iostream>
#include<string.h>
using namespace std;

class String{
	private:
		enum{SIZE=100};
		char str[SIZE];
	public:
		String() {str[0]='\0';}
		String(char s[]){strcpy(str,s);}
		void display() const {cout<<str<<endl;}
		operator char*() {return str;}

};

int main(int argc, char** argv) {
	String objS;
	char XString[] = "Pramod Kumar";
	objS = XString;
	objS.display();

	String objS2 = "Annant Kumar";
	cout<<static_cast<char*>(objS2);
	
	return 0;
}
