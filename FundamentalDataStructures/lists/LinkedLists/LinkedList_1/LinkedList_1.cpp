#include<iostream>

using namespace std;

class Node {
	public:
		int data;
		Node* next;
		Node(const int& val, Node* nextVal = NULL) {
			data = val;
			next = nextVal;
		}
		Node(Node* nextVal = NULL) {
			next = nextVal;
		}
};

class linkedList {
	private:
		Node* head;
		Node* tail;
		Node* fence;
		int leftCnt;
		int rightCnt;
		void init() {
			fence = head = tail = new Node;
			leftCnt = 0;
			rightCnt = 0;
		}
		void removeAll() { 
			while(head != NULL) {
				fence = head;
			head = head->next;
			delete fence;
			}
		}
	public:
		linkedList(int size = 10) { init(); }
		~linkedList() { removeAll(); }
		bool insert(const int& val) {
			fence->next = new Node(val, fence->next);
			if(tail == fence) tail = fence->next;
			rightCnt++;
			return true;
		}
		bool remove() {
			//Assert(rightLength() >= 0, "Nothing to remove");
			int val = fence->next->data;
			Node* tmp = fence->next;
			fence->next = tmp->next;
			if(tail == tmp) tail = fence;
			delete tmp;
			rightCnt--;
			return true;
		}
		bool append(const int& val) {
			tail = tail->next = new Node(val, NULL);
			rightCnt++;
			return true;
		}
		void moveStart() {
			fence = head;
			rightCnt +=leftCnt;
			leftCnt = 0;
		}
		void moveEnd() {
			fence = tail;
			leftCnt += rightCnt;
			rightCnt = 0;
		}
		void prev() { 
			if(fence = head) return;
			Node* temp = head;
			while(temp->next != fence) temp = temp->next;
			fence = temp;
			leftCnt--;
			rightCnt++;
		}
		void next() {
			if(fence != tail)
			{
				fence = fence->next;
				rightCnt--;
				leftCnt++;
			}
		}
		int leftLength() const {return leftCnt; }
		int rightLength() const {return rightCnt; }
		void movePos(int pos) {
			//Assert((pos >= 0) && (pos <=rightCnt+leftCnt), "Not in Position");
			rightCnt = rightCnt + leftCnt - pos;
			leftCnt = pos;
			fence = head;
			for(int i = 0; i < pos; i++) fence = fence->next;
		}
		const int& getValue() const {
			//Assert(rightLength() > 0, " No value");
			return fence->next->data;
		}
		void print() const {
  		Node* temp = head;
  		cout << "< ";
  		while (temp != fence) {
    			cout << temp->next->data << " ";
    			temp = temp->next;
 			}
 		cout << "| ";
 		while (temp->next != NULL) {
			 cout << temp->next->data << " ";
			 temp = temp->next;
			}
		cout << ">\n";
		}

};

int main(int argc, char** argv) {
	cout << "Main Strat!!!" <<endl;
	linkedList l1;
	l1.insert(3);
	l1.insert(5);
	l1.insert(67);
	l1.insert(34);
	l1.insert(1);
	l1.insert(59);
	l1.print();
	cout << "Set the fence position!!!" <<endl;
	l1.movePos(2);
	l1.print();
	l1.insert(4);
	l1.print();
	l1.append(100);
	l1.print();
	l1.insert(300);
	l1.insert(551);
	l1.insert(677);
	cout << "set the fence one position back!!" <<endl;
	l1.prev();
	l1.print();
	l1.insert(304);
	l1.insert(10);
	cout << "set the fence next position" <<endl;
	l1.next();
	l1.print();
	l1.insert(590);
	l1.print();
	cout << "set fence at starting position!!" <<endl;
	l1.moveStart();
	l1.print();
	cout << "set fence at end position!!!" <<endl;
	l1.moveEnd();
	l1.print();
	cout<<"leftLength"<<l1.leftLength()<<endl;
	cout<<"rightLength"<<l1.rightLength()<<endl;

	return 0;
}
