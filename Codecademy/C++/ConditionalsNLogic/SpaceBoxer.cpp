#include <iostream>

int main() {
  double Eweight, Sweight;

  std::cout << "What is your weight(lbs) on Earth? ";
  std::cin >> Eweight;

  int destination;

  std::cout << "Enter the number corresponding to your planet you will be competing at: ";
  std::cin >> destination;


  switch (destination) {

    case 1:
    Sweight = Eweight * .38;
    break;
    case 2:
    Sweight = Eweight * .91;
    break;
    case 3:
    Sweight = Eweight * .38;
    break;
    case 4:
    Sweight = Eweight * 2.34;
    break;
    case 5:
    Sweight = Eweight * 1.06;
    break;
    case 6:
    Sweight = Eweight * .92;
    break;
    case 7:
    Sweight = Eweight * 1.19;
    break;
    default:
    std::cout << "INVALID\n";
    break;
  }

  std::cout << "Your weight will be " << Sweight << "lbs. \n";

}
