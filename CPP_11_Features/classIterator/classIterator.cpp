#include "ring.h"

int main(int argc, char** argv) {

	ring<string> text(5);
	text.add("Ten!!");
	text.add("Eleven!!");
	text.add("Twelve!!");
	text.add("Thirteen!!");
	text.add("Fourteen!!");

	for(auto a = 0; a<text.size();a++)
		cout<<text.get(a)<<endl;

	cout<<"Next!!!!"<<endl;

	for(ring<string>::iterator it = text.begin(); it!=text.end(); it++)
		cout<<*it<<endl;

	cout<<"Again Next!!"<<endl;

	for(string value:text)
		cout<<value<<endl;

	cout<<"THE END!"<<endl;

	return 0;
}
