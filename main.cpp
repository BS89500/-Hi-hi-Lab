#include <iostream>

#include "src/hello.hpp"

int main() {
  // Your driver program goes here
  std::string a = "stup";
  std::string b = "stu";
  std::cout << strcmp_case_insensitive(a,b);
}
;