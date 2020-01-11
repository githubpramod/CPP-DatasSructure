#include<iostream>
using namespace std;

class where {
	private:
		char arra[10];
	public:
		void show() {
			cout<<"This Object address is this: "<<this<<endl;
		}
};

int main(int argc, char** argv) {

	where wr1, wr2, wr3, wr4;
	wr1.show();
	wr2.show();
	wr3.show();
	wr4.show();

	return 0;
}
