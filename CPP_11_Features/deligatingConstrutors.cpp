/*constr call to another constr called delegating
 *
 * */
#include<iostream>
using namespace std;

class parent {
	private:
		int dogs;
		string text;
	public:
		parent() {
			dogs = 5;
			cout<<"No Parametrized constructor"<<endl;
		}
		parent(string text) {
			dogs = 5;
			this->text = text;
			cout<<"String parent constructre"<<endl;
		}

};

class child : public parent {
	public:
		child() {}
};
int main(int argc, char** argv) {

	parent pt;
	child ch;

	return 0;
}
