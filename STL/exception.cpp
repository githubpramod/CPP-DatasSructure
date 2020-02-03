#include<iostream>
#include<exception>

class ResourceException : public std::exception {
	private:
		std::string s;
	public:
		ResourceException(const std::string& x) : s(x) {}
		const char* what() const noexcept {
			return s.c_str();
		}

};
class SomethingImportant {
	public:
		SomethingImportant() {
		//	throw 11;
		//	throw ResourceException("Unable to open resource");
			throw "Hello";
		}
};

int main(int argc, char** argv) {
	try {
		SomethingImportant s1;
	}catch(std::exception& ex) {
		std::cout<<ex.what()<<std::endl;
		return 1;
	}catch(int val) {
		std::cout<<"Catch in int: "<< val <<std::endl;
		return 2;
	}catch(std::string s) {
		std::cout<<"Catch string: "<<s<<std::endl;
		return 4;
	}catch(...) {
		std::cout<<"Catch all: "<<std::endl;
		return 3;
	}

	return 0;
}
