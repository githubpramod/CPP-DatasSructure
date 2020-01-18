#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string names[] = { "George", "Penny", "Estelle", "Don", "Mike", "Bob" };

bool alpha_comp(char*, char*);

int main(int argc, char** argv) {

	sort(names, names+6, alpha_comp);

	for(int j=0; j<6; j++)
		cout << names[j] << endl;
	
	return 0;
}

bool alpha_comp(string s1, string s2) {
	return ( strcmp(s1, s2)<0 ) ? true : false;
}
