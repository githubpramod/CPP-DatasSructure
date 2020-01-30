/*const keyword semantics are almost same as in C, but with more strict typing, i.e. a conversion from constant expression to non constant pointer/reference is strictly compile time error in C++.
 * 
int x=10;
const int *pc=&x;
*pc=200; //error
(*pc)++; //error
 *
 *const int &rc=x;
rc=200; //error
++rc;   //error

What does const prefix really means?
Please understand that, It's just a promise, not a true commitment
We'll see how the promise can be broken using const_cast in further sessions.

const_cast - used to remove const effect from expressions, i.e. converting pointer/address/reference to const to normal pointer/reference.


 * */
