#include <iostream>
#include "ringBuffer.h"
using namespace std;

int main() {
	cout << "!!!NestedTemplateClasses!!!" << endl; // prints !!!NestedTemplateClasses!!!

	ring<string>::iterator it;
	it.print();

	ring<string> textring(10);
	textring.add("one");
	textring.add("Two");
	textring.add("Three");
	textring.add("Four");
	textring.add("Five");
	textring.add("Six");
	textring.add("Seven");
	textring.add("Eight");
	textring.add("Nine");
	textring.add("Ten");
	textring.add("Eleven");
	for(auto i=0; i<textring.size();i++){
		cout<<textring.get(i)<<endl;
	}

//	for(ring<string>::iterator it=0; it<textring.size();++it){
//		cout<<it<<endl;
//	}
	cout<<"End"<<endl;
	return 0;
}

