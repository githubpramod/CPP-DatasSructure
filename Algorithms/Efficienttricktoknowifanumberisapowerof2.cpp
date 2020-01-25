/*Efficient trick to know if a number is a power of 2 sing the normal technique of division the complexity comes out to be O(logN), but it can be solved using O(v) where v are the number of digits of number in binary form.
 *
 * */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    isPowerOfTwo(31)? cout<<"Yes"<<endl: cout<<"No"<<endl;
    isPowerOfTwo(64)? cout<<"Yes"<<endl: cout<<"No"<<endl;

    return 0;
}
