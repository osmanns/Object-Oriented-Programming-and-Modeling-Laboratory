#include <iostream>
#include <string>

using namespace std;
int main() {
  string firstName = "Elizabeth";
  string name = firstName + " Jones";
  string str1 = "It is sunny.";
  string str2 = "";
  string str3 = "computer science";
  string str4 = "C++ programming.";
  string str5 = firstName + " is taking " + str4;
  string::size_type len;
  cout << "Line 9 : str3 : " << str3 << endl;
  str3.clear();
  cout << "Line 11 : After clear, str3 : " << str3 << endl;
  cout << "Line 12 : str1.empty() : "
           << str1.empty() << endl;
  cout << "Line 13 : str2.empty() : "
           << str2.empty() << endl;
  cout << "Line 14 : str4 : " << str4 << endl;
  str4.erase(11, 4);
  cout << "Line 16 : After erase(11, 4), str4 : "
           << str4 << endl;
  cout << "Line 17 : Length of \"" << firstName << "\" = "
           << static_cast<unsigned int> (firstName.length() )
           << endl;
  cout << "Line 18 : Length of \"" << name << "\" = "
           << static_cast<unsigned int> (name.length() )
           << endl;
  cout << "Line 19 : Length of \"" << str1 << "\" = "
           << static_cast<unsigned int> (str1.length() )
           << endl;
  cout << "Line 20 : Size of \"" << str5 << "\" = "
           << static_cast<unsigned int> (str5.size() )
           << endl;
  len = name.length();
  cout << "Line 22 : len = "
           << static_cast<unsigned int > (len) << endl;
  return 0;
}

