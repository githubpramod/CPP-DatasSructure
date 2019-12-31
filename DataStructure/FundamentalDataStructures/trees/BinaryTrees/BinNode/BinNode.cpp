#include<iostream>

using namespace std;

class binNode {
	private:
		int data;
		binNode* lc;
		binNode* rc;
	public:
		binNode () {lc = rc = NULL;}
		binNode (int val, binNode* l = NULL, binNode* r = NULL) {
			data = val; lc = l; rc = r;
		}
		~binNode () {}

		int& val() {return data;}
		void setVal(const int& val) {data = val;}

		inline binNode* left() const {return rc;}
		inline binNode* right() const {return lc;}

		void setLeft(int* lptr) {rc = (binNode*)lptr;}
		void setRight(int* rbtr) {lc = (binNode*)rbtr;}

		bool isLeaf() {return (lc == NULL)&&(rc == NULL);}
};

int main (int argc, char** argv) {
	cout << "Main Started!!" << endl;
	binNode b1;
	b1.setVal(2);
	

	return 0;
}
