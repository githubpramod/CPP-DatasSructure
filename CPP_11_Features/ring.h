#include<iostream>
#include<vector>
using namespace std;

template<class T>
class ring {
	private:
		vector <T> __Data;
		int __index;
	public:
		class iterator;
	public:
		ring(int size) : __index(0) {
			__Data.reserve(size);
			for(auto a=0;a<size;a++) {
				__Data.push_back(T());
			}
		}
		void add(T value) {
		
			if(__index<__Data.size()) {
				__Data[__index] = value;
				__index++;
			}else {
				__index = 0;
				__Data[__index] = value;
			}
		}
		T get(int index) {
			if(__index<__Data.size())
				return __Data[index];
		}

		int size() {
		
			return __Data.size();
		}

};

template<class T>
class ring<T> :: iterator {

	public:
		void print() const;
};

template<class T>
void  ring<T>::iterator::print() const {
	cout << "Iterator: " << endl;
};
