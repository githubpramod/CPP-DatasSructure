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
		
		iterator begin() {
			return iterator(0, *this);
		}
		iterator end() {
			return iterator(m_size, *this);
		}		
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
	private:
		int m_pos;
		ring &m_ring;
	public:
		iterator(int pos, ring& ring_ref) : m_pos(pos), m_ring(ring_ref) {}
		iterator operator ++(int) {
			iterator old = *this;
			++(*this);
			return old;
		}
		iterator& operator ++() {
			++m_pos;
			return *this;
		}

		T& operator *() {
			return m_ring.get(m_pos);
		}
		bool operator ==(const iterator& th) const {
			return m_pos == th.m_pos;
		}
		bool operator !=(const iterator& th) const {
			return !(*this == th);
		}
};
