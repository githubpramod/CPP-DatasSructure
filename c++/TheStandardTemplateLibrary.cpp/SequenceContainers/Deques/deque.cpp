/*
 *A deque is like a vector in some ways and like a linked list in others. Like a vector, it supports
random access using the [] operator. However, like a list, a deque can be accessed at the front
as well as the back. It’s a sort of double-ended vector, supporting push_front() , pop_front() ,
and front() .
Memory is allocated differently for vectors and queues. A vector always occupies a contiguous
region of memory. If a vector grows too large, it may need to be moved to a new location
where it will fit. A deque, on the other hand, can be stored in several non-contiguous areas; it
is segmented. A member function, capacity() , returns the largest number of elements a vector
can store without being moved, but capacity() isn’t defined for deques because they don’t
need to be moved.
 * */

#include<iostream>
#include<deque>
using namespace std;
 int main(int argc, char** argv) {
 
	deque<int> deq;
	deq.push_back(30);
	deq.push_back(40);
	deq.push_back(50);
	deq.push_front(20);
	deq.push_front(10);
	deq[2] = 33;

	for(int j=0; j<deq.size(); j++)
		cout << deq[j] << ' ';

	cout << endl;

	 return 0;
 }
