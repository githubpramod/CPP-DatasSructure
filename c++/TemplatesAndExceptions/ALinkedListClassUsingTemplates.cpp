/*
 *Templates (also called parameterized classes in the UML)
 * */
#include<iostream>
using namespace std;

template<class TYPE>
struct link {
	TYPE data;
	link* next;
};

template<class TYPE>
class linklist {
	private:
		link<TYPE>* first;
	public:
		linklist() { first = NULL; }
		void additem(TYPE d);
		void display();
};

template<class TYPE>
void linklist<TYPE>::additem(TYPE d) {
	link<TYPE>* newlink = new link<TYPE>;
	newlink->data = d;
	newlink->next = first;
	first = newlink;
}

template<class TYPE>
void linklist<TYPE>::display() {
	link<TYPE>* current = first;
	while( current != NULL ) {
		cout << endl << current->data;
		current = current->next;
	}
}

int main(int argc, char** argv) {
	linklist<double> ld;
	ld.additem(151.5);
	ld.additem(262.6);
	ld.additem(373.7);
	ld.display();

	linklist<char> lch;
	lch.additem('a');
	lch.additem('b');
	lch.additem('c');
	lch.display();
	cout<<endl;

	return 0;
}
