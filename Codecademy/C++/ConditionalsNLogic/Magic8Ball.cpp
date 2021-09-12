# include <iostream>
# include <cstdlib>

int main() {

  // Your future is here

  std::cout << "MAGIC 8-BALL: \n\n";

  srand(time(NULL));

  //The 1st part of the statement
  int answer = std::rand() % 10;

  if (answer == 0) {
    std::cout << "Your day will be ";
  } else if (answer == 1) {
    std::cout << "Your week will be ";
  } else if (answer == 2) {
    std::cout << "Your morning will be ";
  } else if (answer == 3) {
    std::cout << "Your afternoon will be ";
  } else if (answer == 4) {
    std::cout << "Your night will be ";
  } else if (answer == 5) {
    std::cout << "Your love life will be ";
  } else if (answer == 6) {
    std::cout << "Your work life will be ";
  } else if (answer == 7) {
    std::cout << "Your home life will be ";
  } else if (answer == 8) {
    std::cout << "Your twilight years will be ";
  } else if (answer == 9) {
    std::cout << "Your POG career will be ";
  } else {
    std::cout << "The stars say it's ";
  }

  // The second part of the statement
  int reply = std::rand() % 3;

  switch (reply) {

    case 0:
    std::cout << "good";
    break;
    case 1:
    std::cout << "bad";
    break;
    case 2:
    std::cout << "okay";
    break;
    default:
    std::cout << "unknown";
    break;
  }
}
