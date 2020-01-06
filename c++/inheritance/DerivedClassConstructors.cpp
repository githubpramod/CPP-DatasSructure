#include<iostream>
using namespace std;
/*
 * What happens if we want to initialize a CountDn object to a value?
Can the one-argument constructor in Counter be used? The answer is no.
* 
* As we saw in counter , the compiler will substitute a no-argument constructor from the base
class, but it draws the line at more complex constructors. To make such a definition work we must
write a new set of constructors for the derived class.
 * */
class Counter{
        private:
        protected:
                unsigned int count;
        public:
                //Counter() : count(0) {}
                Counter() : count() {}
                Counter(int c) : count(c) {}
                unsigned int getCount() const {return count; }
                Counter operator ++(){ ++count; }
};

class countDn : public Counter {
        public:
				countDn() : Counter() {}
				countDn(int t) : Counter(t) {}
                Counter operator --(){return Counter(--count);}
};

int main(int argc, char** argv) {
        countDn CD;
        countDn CD1(23);

        cout<<CD.getCount()<<endl;
        cout<<CD1.getCount()<<endl;
        
        ++CD;
        ++CD;
        ++CD;
        ++CD;
        cout<<CD.getCount()<<endl;
        
        
        --CD1;
        --CD1;
        cout<<CD1.getCount()<<endl;
        
        countDn CD2 = --CD1;
        
        cout<<CD2.getCount()<<endl;
        
        return 0;
}

