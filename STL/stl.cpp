#include <iostream>

template<typename T>
class Container {
  T t;

  public : 
  explicit Container(T t) : t(t) {

  }

  friend std::ostream& operator<<(std::ostream& os, const Container<T>& c) {
    return (os << "Container holding: " << c.t);
  }
};

template<typename X>
bool isGreater(X x, X y) {
	return x>y;
}
template<>
bool isGreater(int x, int y) {
	std::cout<<"Specilized int\n";
	return x>y;
}
using namespace std;

int main(int argc, char** argv) {

  cout << std::boolalpha;

  Container<int> c(100);
  Container<string> s("string");
  cout << c << "\n";
  cout << s << "\n";

  cout<<isGreater(6,12)<<endl;
  cout<<isGreater(22.3,45.6)<<endl;
  cout<<isGreater("AAA","BBB")<<endl;
  cout<<isGreater('c','s')<<endl;

  auto y = []<typename T> (T t1, T t2) {
  	return t1==t2;
  };

  cout<<"Lambda: "<<y(12,2)<<endl;

  [] <typename X> (X x) {
    cout << x << endl;
  }("Hello");  

  return 0;
}
