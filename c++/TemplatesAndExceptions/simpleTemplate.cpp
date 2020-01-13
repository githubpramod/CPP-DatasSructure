/*
 *When the compiler sees such a function call, it knows that the type to use is int , because that’s
the type of the argument int1 . So it generates a specific version of the abs() function for type
int , substituting int wherever it sees the name T in the function template. This is called
instantiating the function template, and each instantiated version of the function is called a
template function. (That is, a template function is a specific instance of a function template.
 * 
 *Why Not Macros?
Old-time C programmers may wonder why we don’t use macros to create different versions of
a function for different data types. For example, the abs() function could be defined as
#define abs(n) ( (n<0) ? (-n) : (n) )
 *
 * This has a similar effect to the class template in TEMPABS , because it performs a simple text
substitution and can thus work with any type. However, as we’ve noted before, macros aren’t
much used in C++. There are several problems with them. One is that macros don’t perform
any type checking. There may be several arguments to the macro that should be of the same
type, but the compiler won’t check whether or not they are. Also, the type of the value returned
isn’t specified, so the compiler can’t tell if you’re assigning it to an incompatible variable. In
any case, macros are confined to functions that can be expressed in a single statement. There
are also other, more subtle, problems with macros. On the whole it’s best to avoid them.
 * */
#include<iostream>
using namespace std;

template<typename T> //<class T>
T abs (T n) {
	
	return (n < 0) ? -n : n;
}

int main(int argc, char** argv) {

	int int1 = 34;
	int int2 = -34;
	long lon1 = 70000L;
	long lon2 = -80000L;
	double dub1 = 8.86;
	double dub2 = -20.26;

	cout << "\nabs(" << int1 << ") =" <<abs(int1);
	cout << "\nabs(" << int2 << ") =" <<abs(int2);
	cout << "\nabs(" << lon1 << ") =" <<abs(lon1);
	cout << "\nabs(" << lon2 << ") =" <<abs(lon2);
	cout << "\nabs(" << dub1 << ") =" <<abs(dub1);
	cout << "\nabs(" << dub2 << ") =" <<abs(dub2);

	return 0;
}
