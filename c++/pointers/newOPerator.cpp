/*
 *C programmers will recognize that new plays a role similar to the malloc() family of library
functions. The new approach is superior in that it returns a pointer to the appropriate data type,
while malloc() ’s pointer must be cast to the appropriate type. There are other advantages as
well.
C programmers may wonder whether there is a C++ equivalent to realloc() for changing the
size of memory that has already been reallocated. Sorry, there’s no renew in C++. You’ll need
to fall back on the ploy of creating a larger (or smaller) space with new , and copying your data
from the old area to the new one.

If your program reserves many chunks of memory using new , eventually all the available mem-
ory will be reserved and the system will crash. To ensure safe and efficient use of memory, the
new operator is matched by a corresponding delete operator that returns memory to the oper-
ating system. In NEWINTRO the statement
delete[] ptr;
returns to the system whatever memory was pointed to by ptr .

Deleting the memory doesn’t delete the pointer that points to it ( str in NEWINTRO ), and doesn’t
change the address value in the pointer. However, this address is no longer valid; the memory
it points to may be changed to something entirely different. Be careful that you don’t use
pointers to memory that has been deleted.
 * */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
	char* str = "Idle hands are the devil’s workshop.";
	int len = strlen(str);

	char* ptr;
	ptr = new char[len+1];
	strcpy(ptr, str);
	cout << "ptr=" << ptr << endl;
	delete[] ptr;
return 0;
}
