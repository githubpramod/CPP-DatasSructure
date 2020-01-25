#ifndef RINGBUFFER_H_
#define RINGBUFFER_H_

#include <iostream>

#include <vector>

template<class T>
class ring {
private:
	std::vector <T> _data;
	int _cur_index;
public:
	class iterator;

	ring(int size):_cur_index(0){
		_data.reserve(size);
		for(auto i=0;i<size;i++){
			_data.push_back(T());
		}
	}
	void add(T value){
		if(_cur_index < _data.size()){
			_data[_cur_index] = value;
			_cur_index++;
		}else{
			_cur_index = 0;
			_data[_cur_index] = value;
		}
	}
	T get(int index){
		if(index < _data.size()){
			return _data[index];
		}
		return T();
	}
	int size(){
		return static_cast<int>(_data.size());
	}

};

template<class T>
class ring<T>::iterator{
public:
	void print() const;
};

template<typename T>
void ring<T>::iterator::print() const
{
	std::cout<< "Hello from iterator." << std::endl;

};

#endif /* RINGBUFFER_H_ */

