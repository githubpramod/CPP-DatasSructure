#include<iostream>

using namespace std;

int x;
int func(int n){
	//static int x = 0;
	
	if(n>0){
		x++;
		return func(n-1) + x;
		}
		return 0;
	}
int main(int argc, char **argv){

	int val =0 ;
	val = func(0);
	std::cout<<val<<std::endl;
	val = func(5);
	std::cout<<val<<std::endl;
	
	return 0;
}
