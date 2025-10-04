#include <string>
using namespace std;
std::string hello() {
   return "Hello World!";
}
int strcmp_case_insensitive(string word1, string word2) {
   int num1;
   int num2;
   int diff;
   int length;
   int shortLength;
   if (word1.length() < word2.length()) {
      length = word2.length();
      shortLength = word1.length();
   } else {
      length = word1.length();
      shortLength = word2.length();
   }
   for (int i = 0; i < length; i++) {
      num1 = int(word1.at(i));
      num2 = int(word2.at(i));

      if (num1 < 97) {
         num1 += 32;
      }
      if (num2 < 97) {
         num2 += 32;
      }
      if (num1 != num2) {
         diff = num1 - num2;
         return diff/abs(diff);
      }
      if (i == shortLength - 1 && shortLength != length) {
         if (num1 == num2) {
            return (word1.length() - word2.length()) / abs(int(word1.length() - word2.length()));
         }
         diff = num1 - num2;
         return diff/abs(diff);
      }

   }
   return 0;
}
/*add_executable(hello_test tests/hello_test.cpp src/hello.cpp
src/valueAndReference.cpp
src/valueAndReference.h
tests/valueAndRef_Test.cpp
)
*/

//add_executable(main main.cpp src/hello.cpp)

//target_link_libraries(hello_test PRIVATE Catch2::Catch2WithMain)
