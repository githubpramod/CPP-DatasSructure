#include<iostream>
using namespace std;
const unsigned LIMIT = 100;
class safeArray {
	private:
		int array[LIMIT];
	public:
		int& access(int n) {
			if(n<0 || n>=LIMIT)
			{
				cout<<"Index ot of Bounds\n"<<endl;
				exit(1);
			}
			return array[n];
		}
};
int main(int argc, char** argv) {
	safeArray sa;
	for (int i=0; i<LIMIT;i++)
		sa.access(i)=i*10;
	for(int i=0;i<LIMIT;i++)
	{
		int temp = sa.access(i);
		cout<<"Element: "<<i <<": "<<temp<<endl;
	}

	return 0;
}
