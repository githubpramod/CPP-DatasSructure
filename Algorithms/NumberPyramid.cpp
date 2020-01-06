#include<iostream>
using namespace std;

class StarPyramid {
	private:
		int row;
		int col;
	public:
		StarPyramid() : row(0), col(0) {}
		StarPyramid(int r, int c) : row(r), col(c) {}
		void SetRowCol(int r, int c) {row = r; col = c; }
		void getRowCol() {
			cout<<"Enter the Row Numbers: "; cin>>row;
			cout<<"Enter the Col numbers: "; cin>>col;
		}
		void StarPyramidShow(){
			for(int i = 1; i <=row; i++) {
				for(int j = 1; j <= i; j++) {
					cout<<j<<" ";
				}
				cout<<endl;
			}
		}
};

int main(int argc, char**) {

	StarPyramid sp;
	//sp.SetRowCol();
	sp.getRowCol();
	sp.StarPyramidShow();

	return 0;
}
