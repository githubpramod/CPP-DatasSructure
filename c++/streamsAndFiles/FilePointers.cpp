/*
 *ach file object has associated with it two integer values called the get pointer and the put
pointer. These are also called the current get position and the current put position, or—if it’s
clear which one is meant—simply the current position. These values specify the byte number
in the file where writing or reading will take place.
 * 
 *hen you must take control of the file pointers yourself so that you can read from and write to
 an arbitrary location in the file. The seekg() and tellg() functions allow you to set and
examine the get pointer, and the seekp() and tellp() functions perform these same actions on
the put pointer.
where the seekg()
function set it to the beginning of the file so that reading would start there. This form of
seekg() takes one argument, which represents the absolute position in the file. The start of the
file is byte 0,
The seekg() function can be used in two ways. We’ve seen the first, where the single argu-
ment represents the position from the start of the file. You can also use it with two arguments,
where the first argument represents an offset from a particular location in the file, and the sec-
ond specifies the location from which the offset is measured. There are three possibilities for
the second argument: beg is the beginning of the file, cur is the current pointer position, and
end is the end of the file. The statement
seekp(-10, ios::end);
for example, will set the put pointer to 10 bytes before the end of the file.
The first thing the program does is figure out how many persons are in the file. It does this by
positioning the get pointer at the end of the file with the statement
infile.seekg(0, ios::end);
The tellg() function returns the current position of the get pointer. The program uses this
function to return the pointer position at the end of the file; this is the length of the file in
bytes. Next, the program calculates how many person objects there are in the file by dividing
by the size of a person ; it then displays the result.
 * */

#include<iostream>
#include<fstream>
using namespace std;

class person {
	private:
		int age;
		char name[40];
	public:
		void getData() {
		cout<<"\nEnter Name: ";cin>>name;
		cout<<"\nEnter Age: ";cin>>age;
		}
		void showData() {
			cout<<"\nName: "<<name<<endl;
			cout<<"\nAge: "<<age<<endl;
		}
};

int main(int argc, char** argv) {
	char ch;
	person ps;
	fstream file;

	file.open("MultiObj.dat",ios::in|ios::binary);

	file.seekg(0, ios::end); //go to 0 bytes from end
	int endposition = file.tellg(); //find where we are
	int n = endposition / sizeof(person);
	cout << "\nThere are " << n << " persons in file";
	
	cout << "\nEnter person number: ";
	cin >> n;
	int position = (n-1) * sizeof(person); //number times size
	file.seekg(position); //bytes from start
							//read one person
	file.read( reinterpret_cast<char*>(&ps), sizeof(ps) );
	ps.showData();

	cout<<endl;

	return 0;
}
