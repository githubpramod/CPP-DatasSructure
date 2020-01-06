#include<iostream>
using namespace std;

struct link {
	int data;
	link* next;
};

class linklist {
	private:
		link* first;
	public:
		linklist() {first == NULL; }
		void additems(int item);
		void display();
};

void linklist :: additems(int item) {
	link* newlink = new link;
	newlink->data = item;
	newlink->next = first;
	first = newlink;
}

void linklist :: display() {
	link* current = first;
	while(current != NULL) {
		cout<<current->data<<endl;
		current = current->next;
	}
}

int main(int argc, char** argv) {

	linklist l1;
	l1.additems(5);
	l1.additems(56);
	l1.additems(7);
	l1.additems(23);
	l1.additems(12);

	l1.display();

	return 0;
}
