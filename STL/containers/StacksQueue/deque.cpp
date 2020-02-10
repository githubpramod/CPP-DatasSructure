#include<iostream>
#include<deque>
#include<stack>
#include<queue>
using namespace std;
int main(int argc, char** argv) {

	deque<int> Deq;
	stack<int> Stack;
	queue<int> Queue;
	priority_queue<int> pq;

	Deq.push_front(100);
	Deq.push_front(200);
	Deq.push_back(300);
	Deq.push_back(400);

	for(auto a = 0; a<Deq.size(); ++a) {
		cout << Deq[a] << endl;
	}

	Stack.push(100);
	Stack.push(200);
	Stack.push(300);
	Stack.push(400);

	while(!Stack.empty()) {
		cout<<Stack.top() << " ";
		Stack.pop();
	}
	cout<<endl;

	Queue.push(100);
	Queue.push(100);
	Queue.push(100);
	Queue.push(100);

	while(!Queue.empty()) {
	
		cout<<Queue.front() << " ";
		Queue.pop();
	}
	cout<<endl;
	
	pq.push(345);
	pq.push(35);
	pq.push(45);
	pq.push(34);

	while(!pq.empty()) {
	
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;


	return 0;
}
