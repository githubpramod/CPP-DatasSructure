#include<iostream>
using namespace std;

template<class T>

class ring {
	private:
		int m_pos;
		int m_size;
		T* m_value;
	public:
		class iterator;
	public:
		ring(int size) : m_pos(0), m_size(size), m_value(NULL) {
			m_value = new T[size];
		}
		
		~ring() {
			delete [] m_value;
		}
		
		int size() { return m_size; }
		
		void add(T value) {
			m_value[m_pos++] = value;
			if(m_pos == m_size)
				m_pos=0;
		}
		
		T &get(int pos) {
			return m_value[pos];
		}
};

template<class T>

class ring<T>::iterator {
	public:
		void print() {
			cout << "Iterator!!! " << T() << endl;
		}
};
