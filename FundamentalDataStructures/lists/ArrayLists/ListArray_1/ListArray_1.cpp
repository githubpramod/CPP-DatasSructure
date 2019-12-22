#include<iostream>

using namespace std;


class List {

	private:
		int maxSize;
		int listSize;
		int fence;
		int* listArray;
	public:
		List(int size = 10) {
			maxSize = size;
			listSize = fence=0;
			listArray = new int[maxSize];
		}
		~List() {
		
			delete [] listArray;
		}
		void clear() {
		
			delete [] listArray;
			listSize = fence=0;
			listArray = new int[maxSize];
		}
		bool insert(const int& val) {
			if(listSize == maxSize)
				return false;
			for(int i = listSize; i > fence; i--)
				listArray[i] = listArray[i - 1];
			listArray[fence] = val;
			listSize++;
			return true;
		}
		bool append(const int& val) {
			if(listSize == maxSize)
				return false;
			listArray[listSize++] = val;
			return true;
		}
		void setStart() {
			fence = 0;
		}
		void setEnd() {
			fence = listSize; 
		}
		void prev() {
			if(fence != 0)
				fence--;
		}
		void next() {
			if(fence < listSize)
				fence++;
		}
		int leftLength() const {
			return fence;
		}
		int rightLength() const {
			return listSize - fence;
		}
		bool setPos(int pos) {
			if((pos >= 0) && (pos <= listSize))
				fence = pos;
			return ((pos >= 0) && (pos <= listSize));
		}
		bool getValue(int& val) {
			if(rightLength() == 0)
				return false;
			else
			{
				val = listArray[fence];
				return true;
			}
		}
		bool remove(int& val) {
			if(rightLength() == 0)
				return false;
			val = listArray[fence];
			for(int i = fence; i < listSize - 1; i++)
				listArray[i] = listArray[i + 1];
			listSize--;
			return true;
		}
		void print() const {
			int temp = 0;
			cout << "< ";
			while(temp < fence) cout << listArray[temp++] << " ";
			cout << "! ";
			while(temp < listSize) cout << listArray[temp++] << " ";
			cout << ">\n ";
		}

};

int main(int argc, char** argv) {
	cout << "List Main Start!!!" << endl;
	List l1;
	l1.insert(3);
	l1.insert(5);
	l1.insert(67);
	l1.insert(34);
	l1.insert(1);
	l1.insert(59);
	l1.print();
	cout << "Set the fence position!!!" <<endl;
	l1.setPos(2);
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
	l1.setStart();
	l1.print();
	cout << "set fence at end position!!!" <<endl;
	l1.setEnd();
	l1.print();
	cout<<"leftLength"<<l1.leftLength()<<endl;
	cout<<"rightLength"<<l1.rightLength()<<endl;
	
	return 0;
}
