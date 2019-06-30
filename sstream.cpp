#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream, std::stringbuf
#include <string>
using namespace std;
int main () {
    string  nome = "Nuno Cr";
    int idd = 20;
  std::stringstream ss;
  ss << nome << " , " << idd;
  s string = ss.str();
  /*
  ss.str ("Example string");
  std::string s = ss.str();
  */
  std::cout << s << '\n';
  return 0;
}
