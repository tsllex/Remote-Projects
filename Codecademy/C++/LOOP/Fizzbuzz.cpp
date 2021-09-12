#include <iostream>

//This is the Fizz Buzz game
int main() {
  for (int i = 0; i <= 100; i++) {
  //FIZZBUZZ
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "FIZZBUZZ\n";
  //BUZZ
    } else if (i % 5 == 0) {
      std::cout << "BUZZ\n";
  //FIZZ
    } else if (i % 3 == 0) {
      std::cout << "FIZZ\n";
  //INTEGERS
    } else {
      std::cout << i << "\n";
    }
  }
return 0;
//end
}
