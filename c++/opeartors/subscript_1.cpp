#include<iostream>
//#include<process>
using namespace std;
const int LIMIT = 100;
class safearray{
	private:
		int array[LIMIT];
	public:
		void putel(int n, int elval){
		
			if(n<0 || n >=LIMIT)
			{
				cout <<"Index is out of bounds:\n";
				exit(1);
			}
			array[n] = elval;	
		}
		int getel(int n) const {
			if(n<0 || n>=LIMIT)
			{
				cout<<"Index out of Bounds\n";
				exit(1);
			}
			return array[n];
		}
};

int main(int argc, char** argv) {

	safearray sa;
	for(int i=0; i<LIMIT;i++)
		sa.putel(i,i*10);
	for(int i=0;i<LIMIT;i++){
		int temp = sa.getel(i);
		cout<<"Elements: "<<i <<": " <<temp<<endl;
	}
	return 0;
}
