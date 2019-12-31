#include<iostream>
using namespace std;

class pascalTriangle {
	private:
		static int size;
		int array[size][size] = {};
	public:
		pascalTriangle(int n=0) { size = n;}
		~pascalTriangle() {}

		void printPascalTriangle(int num) {
			size = num;
			for(int line = 0; line < num; line++){
				for(int i =0; i < line; i++){
					if(line == i || i == 0)
						array[i][i] = 1;
					else
						array[line][i] = array[line - 1][i - 1] + array[line - 1][i];
					cout<<array[line][i]<<" ";
				}
				cout<<"\n";
			}
		}

};

int main(int argc, char** argv) {

	pascalTriangle pt(5);
	int num=0;
	cout<<"Enter the number for rows!!\n";
	cin>>num;
	pt.printPascalTriangle(num);
	return 0;
}
