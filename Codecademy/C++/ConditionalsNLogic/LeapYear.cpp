#include <iostream>

int main() {

  int year;

  //requesting year from user
  std::cout << "Current year: ";
  std::cin >> year;

//year must a four digit number
  if ( year < 1000 || year > 9999) {
    std::cout << "INVALID \n";
  }
//if evenly divided by 4 : leap year
//if evenly divided by 400 : leap year
//if evenly divided by 100 but not 400 : not leap year
  else if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << year;
    std::cout << " falls on a leap year.\n";
  }
  else {
    std::cout << year;
    std::cout << " is not a leap year.\n";
  }
}
