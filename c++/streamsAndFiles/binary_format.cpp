/*
 *use two new functions: write() , a member of ofstream ; and
read() , a member of ifstream . These functions think about data in terms of bytes (type char ).
They don’t care how the data is formatted, they simply transfer a buffer full of bytes from and
to a disk file. The parameters to write() and read() are the address of the data buffer and its
length. The address must be cast, using reinterpret_cast , to type char* , and the length is the
length in bytes (characters), not the number of data items in the buffer.
 * 
 *use the reinterpret_cast operator to
make it possible for a buffer of type int to look to the read() and write() functions like a
buffer of type char .
is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int) );
The reinterpret_cast operator is how you tell the compiler, “I know you won’t like this, but
I want to do it anyway.” It changes the type of a section of memory without caring whether it
makes sense, so it’s up to you to use it judiciously.
You can also use reinterpret_cast to change pointer values into integers and vice versa. This
is a dangerous practice, but one which is sometimes necessary.
 * */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int MAX = 100;
int buf[MAX];

int main(int argc, char** argv) {

	for(int a = 0; a<MAX;a++)
		buf[a]=a;

	ofstream os("binary.dat",ios::binary);

	os.write(reinterpret_cast<char*>(buf),MAX*sizeof(int));
	os.close();

	for(int a=0;a<MAX;a++)
		buf[a]=0;

	ifstream is("binary.dat",ios::binary);
	
	is.read(reinterpret_cast<char*>(buf),MAX*sizeof(int));

	for(int i=0;i<MAX;i++)
		if(buf[i]!=i) {cout<<"Data is incorrect\n";return 1;}

	cout<<"Data is correct\n";


	return 0;
}
