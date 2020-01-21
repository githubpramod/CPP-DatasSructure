#include <iostream>
#include <string>
#include <typeinfo>
using namespace std; 
int main() {
	int i;
    int intt = 9;
    string str = "string";
    double *doubleptr = nullptr;
    float floatVar = 9.99;
 
    cout << "INte: " << typeid(intt).name() << '\n'
              << "string type: " << typeid(str).name() << '\n'
	      << "Float type: " << typeid(floatVar).name() << '\n'
              << "doubel pointer: " << typeid(doubleptr).name() << '\n';

    decltype(str) name = "Bbbx";
    cout << typeid(name).name() <<endl;
return 0;
}
