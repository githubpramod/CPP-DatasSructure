#include "ring.h"
#include<string>
int main(int argc, char** argv) {

	ring<string> :: iterator it;
	it.print();
	
	ring<string> text(5);

	text.add("ONe");
	text.add("Two");
	text.add("THree");
	text.add("Four");
	text.add("Five");

	for(auto a = 0; a<text.size(); a++)
		cout<<text.get(a)<<endl;



	return 0;
}
