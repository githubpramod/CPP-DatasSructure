#include<iostream>
using namespace std;
/*
 * An important topic in inheritance is knowing when a member function in the base class can be
used by objects of the derived class. This is called accessibility;
* if you don’t spec-
ify a constructor, the derived class will use an appropriate constructor from the base class.
* In
COUNTEN there’s no constructor in CountDn , so the compiler uses the no-argument constructor
from Count .
* This flexibility on the part of the compiler—using one function because another isn’t available—
appears regularly in inheritance situations.
Access Specifier,  Accessible from Own Class,  Accessible from Derived Class, Accessible from Objects Outside Class
public                  yes                        yes                            yes
protected               yes                        yes                             no
private yes             yes                         no                             no

 * */
class Counter{
        private:
        protected:
                unsigned int count;
        public:
                Counter() : count(0) {}
                Counter(int c) : count(c) {}
                unsigned int getCount() const {return count; }
                Counter operator ++(){ ++count; }
};

class countDn : public Counter {
        public:

                Counter operator --(){return Counter(--count);}
};

int main(int argc, char** argv) {
        countDn CD;

        cout<<CD.getCount()<<endl;
        
        ++CD;
        ++CD;
        ++CD;
        ++CD;
        
        cout<<CD.getCount()<<endl;
        
        --CD;
        --CD;
        cout<<CD.getCount()<<endl;
        return 0;
}

