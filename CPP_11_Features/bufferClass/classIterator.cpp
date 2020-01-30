#include "ring.h"

int main(int argc, char** argv) {

	ring<string>::iterator it;
	it.print();

	ring<string> text(5);
	text.add("Ten!!");
	text.add("Eleven!!");
	text.add("Twelve!!");
	text.add("Thirteen!!");
	text.add("Fourteen!!");

	for(auto a = 0; a<text.size();a++)
		cout<<text.get(a)<<endl;

	cout<<"Next!!!!"<<endl;

	for()

	return 0;
}
