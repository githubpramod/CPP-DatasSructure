#include<iostream>
using namespace std;
const int LIMIT = 100;
class safeArray {
	private:
		int array[LIMIT];
	public:
		int& operator [](int n){
			if(n<0 || n>=LIMIT)
			{
				cout<<"Index Out of Bounds\n";
				exit(1);
			}
			return array[n];
		}
};
int main(int argc, char** argv){

	safeArray sa;

	for(int i=0;i<LIMIT;i++)
		sa[i]=i*10;
	for(int i=0;i<LIMIT;i++)
	{
		int temp=sa[i];
		cout<<"Element: "<<i<<": "<<temp<<endl;
	}
	return 0;
}
