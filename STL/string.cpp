#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
 
  string name = "James Slocum";
  string n2("James Slocum");
  string n3(name);
 
  string n4 {'J', 'a', 'm', 'e', 's'};
  string last(name, 6, 6);
  string line(80, '-');
  string reverse(name.rbegin(), name.rend());

  cout << name << '\n';
  cout << n2 << '\n';
  cout << n3 << '\n';
  cout << n4 << '\n';
  cout << last << '\n';
  cout << reverse << '\n';
  cout << line << '\n';

  std::size_t pos = name.find(n4);
  if (pos != std::string::npos) {
    cout << "Found first name at: " << pos << '\n';
  }

  cout << "Comma at: " << ("Hello, How are you?"s).find(",") << '\n';
  cout << line << '\n';

  string about = "is a programmer";
  name.push_back(' ');
  for (char c : about) {
    name.push_back(c);
  }
  cout << name << '\n';

  name.insert(0, "I have heard that ");
  cout << name << '\n';

  pos = name.find("programmer");
  name.replace(pos, ("programmer"s).length(), "snowboarder");

  pos = name.find("heard");
  name.erase(pos, ("heard"s).length());
  name.insert(pos, "read somewhere");
  cout << name << '\n';

  return 0;

}
