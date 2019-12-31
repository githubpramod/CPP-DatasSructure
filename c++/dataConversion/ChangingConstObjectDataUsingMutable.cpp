#include<iostream>
#include<string>
using namespace std;

class SBar {
	private:
		int size;
		mutable string owner;
	public:
		SBar(int sz, string ow) : size(sz), owner(ow) {}
		void setSize(int sz) {size = sz; }
		int getSize() const {return size; }
		string getOwner() const { return owner; } // this can not be 
		//updated because of const used here if want change then use mutable in private data type 
		void setOwner(string oww) const {owner = oww; }
};

int main(int argc, char** argv) {
	SBar sbar(30, "Pramod");
	
	cout<<"Size:"<<sbar.getSize()<<"\nOwner:"<<sbar.getOwner()<<endl;
	sbar.setSize(500);
	sbar.setOwner("Kumar");

	cout<<"Size:"<<sbar.getSize()<<"\nOwner:"<<sbar.getOwner()<<endl;
	return 0;
}
